#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:        
        Node * p;
      Node* insert(Node *head,int data)
      {
          Node n = Node(data);
          cout<<"----"<<endl;
          cout<<"head="<<head<<endl;
          cout<<"n.data="<<n.data<<endl;
          cout<<"n.next="<<n.next<<endl;
          if(head==NULL){
              p = &n;
              return p;
          } else {
              if(p->next==NULL){
                  cout<<"p.next="<<p<<endl;
                  p->next = &n;
              }
              cout<<"n.next="<<n.next<<endl;
              p = &n;
              return head;
          }
      }
      void display(Node *head)
      {
          Node *start=head;
          cout<<"------display-----------"<<endl;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}
