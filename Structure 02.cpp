
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		
};

int main()
{
	Node *head=NULL;
	Node *first=NULL;
	Node *second=NULL;
	
	head = new Node();    //new : allocates memory to head
    first = new Node();   //new : allocates memory to first
    second = new Node();  //new : allocates memory to second
    
    head->data =1;
    head->next = first;  // creating link b/w head and first
    
    first->data =2;
    first->next = second;  // creating link b/w head and first
    
    second->data =3;
    second->next = NULL;  // creating link b/w head and first
    
	return 0;	
}
