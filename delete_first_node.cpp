// Linked-list
#include <iostream> 
using namespace std;

struct node
{
    int data ;
    node* next ;

};

int main()
{
    node* first = new node();
    node* second = new node();
    node* third = new node();
    
    
    first-> data = 10;
    first-> next = second;
    
    second-> data = 20;
    second-> next = third;

    third-> data = 30;
    third-> next = NULL;

    node*head = first;
    
    if (head == NULL)
    {
        cout<< "list is empty" ;
    }
    
    while ( head !=NULL)
    {
        cout<< head->data<< " "<< endl ;
        head = head->next;
    }
    head = first;  // return to first node
    
    head = head->next;  // head assisgn to second node 
    delete first ;

    cout<< "after delete the first node remaining nodes" << endl;

    while ( head !=NULL)
    {
        cout<< head->data<< " " ;
        head = head-> next;
    }
    
    return 0;
}




 
