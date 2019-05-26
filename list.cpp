#include<iostream>
using namespace std;

class node{
 public:
   int val;
   node* next;
 
   node(){
     val=0;
     next=NULL;
      }
};

class linkedlist{
   node* head;
 public:
    linkedlist(){
      head=NULL;
      }

 void insert(int nvalue){
    
   node*temp=new node();
   temp->val=nvalue; 
    if(head==NULL)
   head=temp;
   else
   temp->next=head;
   head=temp;
     }
 void display(){
   node* curr=head;
   while(curr!=NULL){
    cout<<curr->val<<"->";
    curr=curr->next;
       }
   cout<<endl;
   }
 void Delete(){
   if(head==NULL){
    cout<<"no nodes are there"; 
        }

    else{
       head=head->next;
       }
   }
 int Count(){
    node*curr=head;
    int count =0;
   while(curr!=NULL){
     count++;
     curr=curr->next;
      }
  return count;
     }

 void insertAt(int pos, int nval){
    if(pos==0) insert(nval);
      
    else {
       node* temp= new node();
       temp->val=nval;
       node*curr=head;
      int count=1;
      while(count!=pos-1){
         curr=curr->next;
         count++;
         }  
        
      temp->next=curr->next;
      curr->next=temp;
         }
 }
 void deleteAt(int pos){
    if (pos==0) Delete();
     
   else{
      int count=1;
      node* curr=head;
     while(count!=pos-1){
      count++;
      curr=curr->next;
      
       }
     curr->next=curr->next->next;
     }
      
  }
      
     
      
};


int main(){
    linkedlist l;
    for(int i=0;i<9;i++)
      l.insert(i);
     
         
     l.display();

    
     l.insertAt(2,4);
      l.display();
     l.deleteAt(5);
     l.display();

return 0;
}
