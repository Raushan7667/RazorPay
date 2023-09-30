#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertatlast(int data, node *&head, node *&tail)
{
    if (head == NULL)
    {
        node*newNode=new node(data);
       head=newNode;
        tail = newNode;
       
    }
    else
    {
        node *newNode = new node(data);
        tail->next = newNode;
        tail = newNode;
        
    }
    
}

void insertathead(int data, node *&head, node *&tail)
{
    if (head == NULL)
    {
        head = new node(data);
        tail = head;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}

void print(node *&head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    node *head = new node(20);
    node *tail = head;
    
    cout << "Enter how many numbers of elements you want to enter at last: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        int j;
        cin >> j;
        insertatlast(j, head, tail);
    }
    print(head);

    return 0;
}