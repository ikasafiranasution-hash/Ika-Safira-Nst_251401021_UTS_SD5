#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node *root = NULL;
node *insert(node *root, int nilai) {
    if (root == NULL) {
        node *baru = new node;
        baru -> data = nilai;
        baru -> left = NULL;
        baru -> right = NULL;
        return baru;
    }
    if (nilai < root -> data) {
        root -> left = insert(root -> left, nilai);
    } else if (nilai > root -> data) {
        root -> right = insert(root -> right, nilai);
    }
    return root;
}
void postOrder(node *root) {
    if (root != NULL) {
        postOrder(root -> left);
        postOrder(root -> right);
        cout << root -> data << " ";
    }
}
int nilaiTerbesar(node *root) {
    node *temp = root;
    while (temp -> right != NULL) {
        temp = temp -> right;
    }
    return temp -> data;
}
int main() {
    int angka;
    while (cin >> angka && angka != 0) {
        root = insert(root, angka);
    }
    cout << "Post-Order : ";
    postOrder(root);
    cout << endl;
    cout << "Nilai terbesar : " << nilaiTerbesar(root) << endl;
    cout << "Nilai Root : " << root -> data << endl;
    return 0;
}