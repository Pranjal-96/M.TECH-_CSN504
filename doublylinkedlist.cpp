#include<iostream>
using namespace std;

struct node

{
    
    int data;
    struct node*next,*prev;

    
};

struct node* createlinkedlist(int n)
{

struct node *head=NULL,*tail=NULL;

int i;

for(i=1;i<=n;i++)
   {

       struct node* temp= (struct node*)malloc(sizeof(struct node*));

        cout<<"enter the data"<<endl;

     cin>>temp->data;
     temp->next=NULL;
     temp->prev=NULL;



          if(head==NULL)
           {
              head=temp;
              tail=temp;
              
           }
           else
           {  
              
              temp->prev=tail;
              tail->next=temp;
              tail=temp;

            }
    }

return head;
    
}



void print(struct node* head)
{

cout<<"element of the list are"<<endl;

struct node* trav=head;

while(trav!=NULL)
     {
      cout<<trav->data<<endl;
      trav=trav->next;
      }

}





int search(struct node*head,int k)
{
struct node *trav=head;

while(trav!=NULL)
{

if(trav->data==k)
   return 1;

trav=trav->next;
}

return 0;
}



struct node* insert(struct node*head,int pos)
   
   {
       int len=0;
         
       struct node*trav=head;
         
       struct node* temp= (struct node*)malloc(sizeof(struct node*));

          cout<<"enter the data you want to insert"<<endl;
          
          cin>>temp->data;
          temp->next=NULL;
          temp->prev=NULL;
          
 //finding the length
 
      while(trav!=NULL)
          {
              len++;
              trav=trav->next;
          }
          
 //insert at begining
 
      if(pos==0)
      {
          
      temp->next=head;
      head->prev=temp;
      head=temp;
      
      }
  //insert at end    
      else if(pos==len-1)
      {
     
          trav=head;
        
          while(trav->next!=NULL)
          {
          trav=trav->next;
          }
        
        trav->next=temp;
        temp->prev=trav;
      
          
      }
      
 //insert elsewhere
   else
   {
     trav=head;
     
      for(int i=0;i<pos-1;i++)
       {
       
       trav=trav->next;
       
       }
  trav->next->prev=temp;
  temp->next=trav->next;
  temp->prev=trav;
  trav->next=temp;
  
   }
   
   return head;
}


struct node* deletell(struct node*head,int posdelete)
{

int len=0;


struct node*trav=head,*prev=NULL;

 //finding the length
      while(trav!=NULL)
          {
              len++;
              trav=trav->next;
          }


       if(posdelete==0)
       {
           
           head=head->next;
           
           
       }
       else if(posdelete==len-1)
       {
           trav=head;
           
          while(trav->next!=NULL)           
           {
               
           prev=trav;
           trav=trav->next;
               
               
           }
           
           prev->next=trav->next;
           
        }
        
        else
        {
            trav=head;
            
           for(int i=0;i<posdelete;i++)
           {
               prev=trav;
               trav=trav->next;
               
           }
           
           
           
           prev->next=trav->next;
           
           
        }
        
        
       return head;
    
    

}


int main()
{

int n,i,x,pos,posdelete;

cout<<"enter the number of nodes"<<endl;

cin>>n;

struct node*head=createlinkedlist(n);
print(head);

cout<<"enter the node you want search"<<endl;
cin>>x;

if(search(head,x))
{
cout<<"element is found"<<endl;
}
else
{
cout<<"element is not found"<<endl;
}



cout<<"enter the pos at which you want to insert"<<endl;

cin>>pos;

head=insert(head,pos);
print(head);


cout<<"enter the pos at which you want to delete the node"<<endl;

cin>>posdelete;


head=deletell(head,posdelete);
print(head);


return 0;
}

