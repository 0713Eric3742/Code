#include <bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node *l, *r;
};

void insert(Node *&root, int &val) {
    if (root == nullptr) {
        root = new Node();
        root->val = val;
        root->l = nullptr;
        root->r = nullptr;
        return;
    }
    if (val == root->val)
        return;
    if (val < root->val)
        insert(root->l, val);
    else
        insert(root->r, val);
}
void print(Node *root) {
    if (root == nullptr)
        return;
    // cout << root->val << "\n"; //前序
    // print(root->l);
    // print(root->r);

    //print(root->l);
    //cout << root->val << "\n"; //中序
    //print(root->r);

     print(root->l);
     print(root->r);
     cout << root->val << "\n"; //後序
}

int main() {
    int n;
    cin >> n;
    Node *root = nullptr;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        insert(root, tmp);
    }
    print(root);
}
