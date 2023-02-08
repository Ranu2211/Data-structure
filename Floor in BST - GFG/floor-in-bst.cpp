//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

int floor(Node *root, int x);

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;

        cout << floor(root, s) << "\n";
    }
}

// } Driver Code Ends


// Function to search a node in BST.
void inorder(Node* root,vector<int>&v){
    if(root==NULL)
    return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
int floor(Node* root, int x) {
   
   vector<int>v;
  inorder(root,v);
  sort(v.begin(),v.end());
  int s = 0, e = v.size()-1;
  while(s<=e){
      int mid = s + (e-s)/2;
      if(v[mid]>x){
          e = mid-1;
      }
      else if(v[mid]<x)
      s = mid+1;
      else if(v[mid]==x)
      return v[mid];
     
  }
  if(x<v[0])
  return -1;
      return v[e];
}
