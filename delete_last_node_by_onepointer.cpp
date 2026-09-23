// delete last node by using one pointer.
#include <iostream>
using namespace std;

struct node{
    int data ;
    node* next;
} ;

int main()
{
node* first = new node();
node* second = new node();
node* third = new node();
node* fourth = new node();

first->data = 10;
first->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = fourth;

fourth->data = 40;
fourth->next = NULL;

node*temp = first;

if(temp == NULL)
{
    cout<< "list is empty";
 
}

while(temp != NULL)
{
    cout << temp-> data << " ";
    temp = temp->next;
}

cout << "\nlist after remove last node\n" ;
temp = first ;

while(temp->next->next != NULL)
{
    temp = temp->next;
}

delete temp->next;
temp->next = NULL;
temp = first;

while(temp != NULL)
{
    cout<< temp->data << " ";
    temp = temp->next;
}

return 0;
}

