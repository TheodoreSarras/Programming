#include <bits/stdc++.h>
using namespace std;

struct Node {
  int value;
  Node* next;
};
void removemiddle(Node* head){
  Node* run = head;
  int counter=0;
  while(run!= NULL){
    counter++;
    run = run->next;
  }
  run = head;
  for(int i=0;i<counter/2-1;i++){
    run = run->next;
  }
  Node* mem= run->next;
  run->next = mem->next;
  mem->next = NULL;
  while (head != NULL) {
    cout << head->value;
    head = head->next;
  }
  delete(run);
  delete(mem);
  return;
}
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

  removemiddle(head);

  delete (one);
  delete (two);
  delete (three);
  delete (four);
  delete (five);
  return 0;
}