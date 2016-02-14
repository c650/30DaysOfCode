/******************************************
        30 Days of Code Submission
        @author Charles Bailey
        Licensed under MIT License
******************************************/
#include <cstddef>
#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *left, *right;
  Node(int d) {
    data = d;
    left = right = NULL;
  }
};
class Solution {
public:
  Node *insert(Node *root, int data) {
    if (root == NULL) {
      return new Node(data);
    } else {
      Node *cur = new Node(data);
      if (data <= root->data) {
        cur = insert(root->left, data);
        root->left = cur;
      } else {
        cur = insert(root->right, data);
        root->right = cur;
      }
      return root;
    }
  }
  int getHeight(Node *root) {
    if (root == NULL)
      return 0;
    if (root->right == NULL && root->left == NULL)
      return 1;

    int left_h, right_h;
    left_h = right_h = 1;

    left_h += getHeight(root->left);
    right_h += getHeight(root->right);

    return left_h > right_h ? left_h : right_h;
  }
}; // End of Solution

int main() {
  Solution myTree;
  Node *root = NULL;
  int T, data;
  cin >> T;
  while (T-- > 0) {
    cin >> data;
    root = myTree.insert(root, data);
  }
  int height = myTree.getHeight(root);
  cout << height;
  return 0;
}
