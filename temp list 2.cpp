
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		
};
Node *input(Node* head, int d)
{
    
}

int main()
{
	Node *head=NULL;
	int n;
	cout<<"Enter Number of Elements in a list :";
	cin>>n;
	
	cout<<"Enter Elements in list :";
	int temp;
	cin>>temp;
	
	head = new Node();    //new : allocates memory to head
	head->data =temp;		 // Entering data in head node
	head->next = NULL;
	
	for(int i=1;i<n;i++)
	{
	    cin>>temp;
	    head = input(head,temp);
	    
	}
	
	Node *first=NULL;
	Node *second=NULL;
	
	
    first = new Node();   //new : allocates memory to first
    second = new Node();  //new : allocates memory to second
    
   
     // creating link b/w head and first
    
    first->data =2;			// Entering data in first node
    first->next = second;  // creating link b/w first and second
    
    second->data =3;	  // Entering data in second node
    second->next = NULL;  // null in link of second
    
    
    
	return 0;	
}
