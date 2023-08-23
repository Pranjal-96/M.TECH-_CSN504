#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Array 
{
   private:  
   int arr[MAX_SIZE];   
   int size;
   public:    
   Array() : size(0) 
{}   
void insert(int value) 
{ 
  if (size < MAX_SIZE)
  {  
    arr[size++] = value;     
  } 
}  
void deleteElement() 
{       
  if(size==0)
    cout<<"stack empty";       
  else
  { 
    cout<<arr[size-1]<<" poped"<<endl; 
    size--;
  }   
}  
void searchElement() 
{ 
  cout<<arr[size-1];  
} 
void print()
{ 
  for(int i=0;i<size;i++)
  {      
    cout<<arr[i]<<" ";  
  } 
}
};
