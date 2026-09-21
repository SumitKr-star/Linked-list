// Linked-list
// new node add at postionn 3.
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
    
    second-> data = 30;
    second-> next = third;

    third-> data = 40;
    third-> next = NULL;
 
    node*temp = first;
   
    // new node which add at position 3.
    node* fourth = new node();
    fourth-> data = 20;
    fourth-> next = NULL;

    int count = 2;
    while(count == 2)
    {
        temp = temp->next;
        count++;
    }

    if(temp !=NULL)
    {
    fourth->next = temp->next;
    temp->next = fourth;
    }

    temp = first;
    
    while(temp!=NULL)
    {
        cout<< temp->data<< endl;
        temp= temp->next;
    }

    return 0;
}




