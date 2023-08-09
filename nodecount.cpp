#include<iostream>
using namespace std;

class Node{
    public:
    int d;
    Node* next;
    Node(){
        next= NULL;
    }
    Node(int data){
        d= data;
        next= NULL;
    }
};

int getCount(Node* head)
{
    int count = 0; 
    Node* current = head; // current node/
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


void printLinkedList(Node*head)
{
    Node* ptr= head;
    while(ptr!=NULL){
        cout << ptr->d << " ";
        ptr=ptr->next;
    }
}

int main(){
    int size;
    cin >> size;
    Node* prev;
    Node* head;

    for(int i=0; i < size; i++)
    {
        int data;
        cin >> data;
        Node*currentNode = new Node(data);

        if(i==0){
            head=currentNode;
            prev=currentNode;
        }
        else{
            prev->next= currentNode;
            prev= currentNode;
        }

    }
    printLinkedList(head);
    cout << "count of nodes is " << getCount(head);
    return 0;
}