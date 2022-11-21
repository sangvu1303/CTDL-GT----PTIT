#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
    int value;
    Node *left;
    Node *right;
    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

Node *Insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);
    if (val < root->value)
        root->left = Insert(root->left, val);
    else if (val > root->value)
        root->right = Insert(root->right, val);
    return root;
}

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->value << ' ';
    }
}
Node *root;
void Input()
{
    int n;
    cin >> n;
    root = NULL;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        root = Insert(root, x);
    }
}
void Solve()
{
    postOrder(root);
    cout << '\n';
}
int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Input();
        Solve();
    }
    return 0;
}
