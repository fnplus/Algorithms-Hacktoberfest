#include <stdio.h>

typedef struct s_node {
  int data;
  struct s_node* left;
  struct s_node* right;
} Node;

int height(Node* node) {
  if(node == NULL) {
    return 0;
  }
  int heightLeft = height(node->left);
  int heightRight = height(node->right);

  if(heightLeft > heightRight) {
    return heightLeft + 1;
  }
  return heightRight + 1;
}


int main(void) {
  Node left_left = {4, NULL, NULL};
  Node left_right = {5, NULL, NULL};
  Node left = {2, &left_left, &left_right};
  Node right = {3, NULL, NULL};
  Node root = {1, &left, &right};

  // Tree Structure is as follows:
  //            1 
  //          🡧  🡦
  //        2      3
  //      🡧  🡦
  //    4       5
  // Height = 3

  printf("Height of tree is %d", height(&root));
}
