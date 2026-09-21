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
    
    
    first-> data = 1;
    first-> next = second;
    
    second-> data = 20;
    second-> next = third;

    third-> data = 30;
    third-> next = NULL;
 
    node*temp = first;
    while ( temp->next != NULL)
    {
       
        temp = temp-> next;

    }
    cout<< temp->data<< endl;


}




