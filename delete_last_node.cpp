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
    node*temp = first;

    if (head == NULL)  // check list is empty
    {
        cout<< "list is empty" ;
    }
    
    while ( temp !=NULL)  // print all nodes values
    {
       cout<< temp->data<< " " ;
       temp = temp-> next;
    }
    cout << "\nlist after remove last node"<< endl;

    temp = first ;  // then return pointer to first node

   
   
    while ( head->next !=NULL)  // reached last node with the help to head pointer
    {
        head = head-> next;
    }
    
    while ( temp->next->next !=NULL) // reached second lasr node 
    {
        temp = temp->next;
    }

    temp->next = NULL; // store the NULL to second last node.
    delete head;  // delete

    temp = first;  // return pointer to first node

    while ( temp !=NULL)
    {
       cout<< temp->data<< " " ;
       temp = temp-> next;
    }


    
    return 0;
}




 