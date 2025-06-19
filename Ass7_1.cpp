#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
char val;
TreeNode* left;
TreeNode* right;
TreeNode(char x) : val(x), left(NULL), right(NULL) {}
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

TreeNode* createTree() {
TreeNode* root = new TreeNode('A');
root->left = new TreeNode('B');
root->right = new TreeNode('C');
root->left->left = new TreeNode('D');
root->left->right = new TreeNode('E');
root->left->right->right = new TreeNode('G');
root->right->right = new TreeNode('F');
return root;
}

int main() {
TreeNode* root = createTree();

cout << "In-order traversal: ";
inorderTraversal(root);
cout << endl;

cout << "Pre-order traversal: ";

preorderTraversal(root);
cout << endl;

cout << "Post-order traversal: ";
postorderTraversal(root);
cout << endl;

cout << "Level-order traversal: ";
levelOrderTraversal(root);
cout << endl;

return 0;
}