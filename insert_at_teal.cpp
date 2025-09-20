#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
   Node* next;
   Node(int val){
    this->val=val;
    this->next= NULL;
   }


};
void insat_teal (Node* &head,int val){
   Node * newNode =new Node(val);
   if(head == NULL){
    head = newNode;
   }
   Node * tmp = head;
   while (tmp->next != NULL)
   {
    tmp = tmp->next;
   }
   tmp->next=newNode;
   

}
void prit_node(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
      cout << tmp->val<< endl;
      tmp = tmp->next;
    }
    
};
int main() {
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    head->next=a;
    a->next=b;
    insat_teal(head,50);
    insat_teal(head,60);
    prit_node(head);
    
    return 0;
}