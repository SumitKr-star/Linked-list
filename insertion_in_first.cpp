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
 
    node*temp = first;

    node* fourth = new node();
    fourth-> data = 40;
    fourth-> next = NULL;

    fourth->next = temp;
    temp = fourth ;


    while ( temp != NULL)
    {
        cout<< temp->data<< endl;
        temp = temp-> next;

    }
    cout<< temp->data<< endl;


}




