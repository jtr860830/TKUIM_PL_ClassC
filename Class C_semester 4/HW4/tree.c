#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct treeNode {
	char data;
	struct treeNode* left;
	struct treeNode* right;
} node;

void insert(char, node**, node*[]);
void printInorder(node*);
void printPreorder(node*);
void printPostorder(node*);

int main(void) {
	char data[11] = "ABCDEFGHIJ";
	node* tree[10] = {NULL};
	puts(data);
	for (int i=0; i<strlen(data); i++)
		insert(data[i], tree+i, tree);
	printInorder(tree[0]);
	puts("");
	printPreorder(tree[0]);
	puts("");
	printPostorder(tree[0]);
	return 0;
}

void insert(char d, node** target, node* tree[]) {
	static int root = -1;
	*target = (node*)malloc(sizeof(node));
	(*target)->data = d;
	(*target)->left = NULL;
	(*target)->right = NULL;
	if (root == -1) {
		root++;
		return;
	}
	if ((tree[root]->left!=NULL) && (tree[root]->right!=NULL)) root++;
	if (tree[root]->left == NULL) {
		tree[root]->left = *target;
		return;
	} else if (tree[root]->right == NULL) {
		tree[root]->right = *target;
		return;
	}
}

void printInorder(node* tree) {
	if (tree) {
		printInorder(tree->left);
		putchar(tree->data);
		printInorder(tree->right);
	}
	return;
}

void printPreorder(node* tree) {
	if (tree) {
		putchar(tree->data);
		printPreorder(tree->left);
		printPreorder(tree->right);
	}
	return;
}

void printPostorder(node* tree) {
	if (tree) {
		printPostorder(tree->left);
		printPostorder(tree->right);
		putchar(tree->data);
	}
	return;
}
