#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
int val;
TreeNode* left;
TreeNode* right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorderTraversal(TreeNode* root) {
if (root == NULL) return;

inorderTraversal(root->left);
cout << root->val << " ";
inorderTraversal(root->right);
}

void preorderTraversal(TreeNode* root) {
if (root == NULL) return;
cout << root->val << " ";
preorderTraversal(root->left);
preorderTraversal(root->right);
}

void postorderTraversal(TreeNode* root) {
if (root == NULL) return;
postorderTraversal(root->left);
postorderTraversal(root->right);
cout << root->val << " ";
}

TreeNode* deleteRootNode(TreeNode* root) {
if (root == NULL) return NULL;
TreeNode* newRoot = root;
if (root->left != NULL) {
newRoot = root->left;
TreeNode* temp = root->left;
while (temp->right != NULL) {
temp = temp->right;
}
temp->right = root->right;
} else {

newRoot = root->right;
}
delete root;
return newRoot;
}

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

void levelOrderTraversal(TreeNode* root) {
if (root == NULL) return;
queue<TreeNode*> q;
q.push(root);
while (!q.empty()) {
TreeNode* node = q.front();
q.pop();
cout << node->val << " ";
if (node->left != NULL) q.push(node->left);
if (node->right != NULL) q.push(node->right);
}
}
int main() {

TreeNode* root = new TreeNode(50);
root->left = new TreeNode(30);
root->right = new TreeNode(70);
root->left->left = new TreeNode(20);
root->left->right = new TreeNode(40);
root->right->left = new TreeNode(60);
root->right->right = new TreeNode(80);

cout << "In-order traversal: ";
inorderTraversal(root);
cout << endl;

cout << "Pre-order traversal: ";
preorderTraversal(root);
cout << endl;

cout << "Post-order traversal: ";
postorderTraversal(root);
cout << endl;

cout << "Deleting the root node..." << endl;
root = deleteRootNode(root);

int insertValues[] = {11, 22, 33, 44, 55, 66, 77};
int numInsertValues = sizeof(insertValues) / sizeof(insertValues[0]);
for (int i = 0; i < numInsertValues; ++i) {
root = insertNode(root, insertValues[i]);
}

cout << "Level-order traversal after modifications: ";
levelOrderTraversal(root);
cout << endl;

return 0;
}