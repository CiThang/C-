#include <iostream>
using namespace std;

struct Node {
int data;
Node* left;
Node* right;
};

Node* taoNut(int value) {
Node* newNode = new Node;
newNode->data = value;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}

Node* chenNut(Node* root, int value) {
if (root == NULL) {
return taoNut(value);
}
if (value < root->data) {
root->left = chenNut(root->left, value);
} else if (value > root->data) {
root->right = chenNut(root->right, value);
}
return root;
}

void duyetTienTo(Node* root) {
if (root != NULL) {
cout << root->data << " ";
duyetTienTo(root->left);
duyetTienTo(root->right);
}
}

void duyetTrungTo(Node* root) {
if (root != NULL) {
duyetTrungTo(root->left);
cout << root->data << " ";
duyetTrungTo(root->right);
}
}

void duyetHauTo(Node* root) {
if (root != NULL) {
duyetHauTo(root->left);
duyetHauTo(root->right);
cout << root->data << " ";
}
}

int timPhanTuNhoNhat(Node* root) {
if (root == NULL) {
return -1;
}
while (root->left != NULL) {

root = root->left;
}
return root->data;
}

int timPhanTuLonNhat(Node* root) {
if (root == NULL) {
return -1;
}
while (root->right != NULL) {
root = root->right;
}
return root->data;
}

bool timGiaTri(Node* root, int value) {
if (root == NULL) {
return false;
}
if (root->data == value) {
return true;
}
if (value < root->data) {
return timGiaTri(root->left, value);
} else {
return timGiaTri(root->right, value);
}
}

int demSoNut(Node* root) {
if (root == NULL) {
return 0;
}
return 1 + demSoNut(root->left) + demSoNut(root->right);
}

int demSoNutNoiBo(Node* root) {
if (root == NULL || (root->left == NULL && root->right == NULL)) {
return 0;
}
return 1 + demSoNutNoiBo(root->left) + demSoNutNoiBo(root->right);
}

int layChieuCao(Node* root) {
if (root == NULL) {
return 0;
}
int chieuCaoBenTrai = layChieuCao(root->left);
int chieuCaoBenPhai = layChieuCao(root->right);
return max(chieuCaoBenTrai, chieuCaoBenPhai) + 1;
}

Node* xoaNut(Node* root, int value) {
if (root == NULL) {
return root;
}
if (value < root->data) {
root->left = xoaNut(root->left, value);

} else if (value > root->data) {
root->right = xoaNut(root->right, value);
} else {
if (root->left == NULL) {
Node* temp = root->right;
delete root;
return temp;
} else if (root->right == NULL) {
Node* temp = root->left;
delete root;
return temp;
}
root->data = timPhanTuNhoNhat(root->right);
root->right = xoaNut(root->right, root->data);
}
return root;
}

int main() {
Node* root = NULL;

root = chenNut(root, 8);
root = chenNut(root, 3);
root = chenNut(root, 1);
root = chenNut(root, 6);
root = chenNut(root, 4);
root = chenNut(root, 7);
root = chenNut(root, 10);
root = chenNut(root, 9);

root = chenNut(root, 14);
root = chenNut(root, 13);

cout << "Duyet tien to: ";
duyetTienTo(root);
cout << endl;

cout << "Duyet trung to: ";
duyetTrungTo(root);
cout << endl;

cout << "Duyet hau to: ";
duyetHauTo(root);
cout << endl;

cout << "Phan tu nho nhat: " << timPhanTuNhoNhat(root) << endl;
cout << "Phan tu lon nhat: " << timPhanTuLonNhat(root) << endl;

int value = 90;
if (timGiaTri(root, value)) {
cout << "Gia tri " << value << " tim thay." << endl;
} else {
cout << value << " không thay." << endl;
}

cout << "So nut: " << demSoNut(root) << endl;

cout << "so nut trong: " << demSoNutNoiBo(root) << endl;

cout << "Chieu cao: " << layChieuCao(root) << endl;

root = xoaNut(root, 20);
cout << "Sau khi xoa 30:" << endl;
cout << "Duyet trung to: ";
duyetTrungTo(root);
cout << endl;

return 0;
}