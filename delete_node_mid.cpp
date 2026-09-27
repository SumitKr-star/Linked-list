// Delete node at particular position of linked list.
// at position 3.
// where we need two pointers.
// first we will reached before(at postion 2) from deleting node.
// second we will reached deleting node(at postion 3).

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
    node* fourth = new node();
    
    
    first-> data = 10;
    first-> next = second;
    
    second-> data = 20;
    second-> next = third;

    third-> data = 30;
    third-> next = fourth;

    fourth->data = 40;
    fourth->next = NULL;
    
    node*head = first;
    node*temp = first;
    node*temp1 = first;

    while ( head !=NULL)
    {
        cout<< head->data<< " " ;
        head = head-> next;

    }
    head = first;

    int count = 1;
    while(count < 2)
    {
        temp = temp->next;
        count++;
    }
    
    int count1 = 1;
    while(count1 < 3)
    {
        temp1 = temp1->next;
        count1++;
    }

    temp->next = temp1->next;
    delete temp1;

    cout<< "\nlist after delete node"<< endl;
    
    while ( head !=NULL)
    {
        cout<< head->data<< " " ;
        head = head-> next;
    }
    head = first; // call pointer to first node

    return 0;



}




