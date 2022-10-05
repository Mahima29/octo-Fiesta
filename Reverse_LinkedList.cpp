#include<bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node* next;
   Node(int data) {
      this->data = data;
      next = NULL;
   }
};
struct LinkedList {
   Node* head;
   LinkedList() { head = NULL; }
   // Function to print linked list
   void reverse() {
      auto curr = head; // current pointer
      Node* prev = NULL; // previous pointer
      while(curr) {
         auto temp = curr -> next;
         curr -> next = prev;
         prev = curr;
         head = prev;
         curr = temp;
      }
   }
   void print() {
      struct Node* temp = head;
      while (temp != NULL) {
         cout << temp->data << " ";
         temp = temp->next;
      }
   }
   void push(int data) {
      Node* temp = new Node(data);
      temp->next = head;
      head = temp;
   }
};
int main() {
   LinkedList list;
   list.push(20);
   list.push(4);
   list.push(15);
   list.push(85);
   list.print();
   list.reverse();
   cout << "\n";
   list.print();
}