#include <bits/stdc++.h>
using namespace std;

struct Node {
  int value;
  Node* next;
};

int main() {
  Node* head;
  Node* one=new Node();
  Node* two=new Node();
  Node* three=new Node();
  Node* four=new Node();
  Node* five=new Node();

  one->value = 1;
  two->value = 2;
  three->value = 3;
  four->value = 4;
  five->value = 5;

  head = one;
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = NULL;

  return 0;
}