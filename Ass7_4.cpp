#include <iostream>
using namespace std;

struct TreeNode {
int val;
TreeNode* left;
TreeNode* right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insertNode(TreeNode* root, int value) {
if (root == NULL) {
return new TreeNode(value);
}
if (value < root->val) {
root->left = insertNode(root->left, value);
} else if (value > root->val) {

root->right = insertNode(root->right, value);
}
return root;
}

TreeNode* minValueNode(TreeNode* node) {
TreeNode* current = node;
while (current->left != NULL) {
current = current->left;
}
return current;
}

TreeNode* deleteNode(TreeNode* root, int key) {
if (root == NULL) {
return root;
}
if (key < root->val) {
root->left = deleteNode(root->left, key);
} else if (key > root->val) {
root->right = deleteNode(root->right, key);
} else {

if (root->left == NULL) {
TreeNode* temp = root->right;
delete root;
return temp;
} else if (root->right == NULL) {
TreeNode* temp = root->left;
delete root;
return temp;

}

TreeNode* temp = minValueNode(root->right);

root->val = temp->val;

root->right = deleteNode(root->right, temp->val);
}
return root;
}

void inorderTraversal(TreeNode* root) {
if (root == NULL) {
return;
}
inorderTraversal(root->left);
cout << root->val << " ";
inorderTraversal(root->right);
}

int main() {

TreeNode* root = new TreeNode(50);
root->left = new TreeNode(30);
root->right = new TreeNode(70);
root->left->left = new TreeNode(20);
root->left->right = new TreeNode(40);
root->right->left = new TreeNode(60);
root->right->right = new TreeNode(80);

root->right->right->left = new TreeNode(75);

insertNode(root, 9);

root = deleteNode(root, 12);

root = deleteNode(root, 53);

cout << "BST after modifications: ";
inorderTraversal(root);
cout << endl;

return 0;
}