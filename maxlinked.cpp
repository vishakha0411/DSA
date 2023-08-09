#include<bits/stdc++.h>
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
int smallestElement(struct Node* head)
{
    // Declare a min variable and initialize
    // it with INT_MAX value.
    // INT_MAX is integer type and its value
    // is 32767 or greater.
    int min = INT_MAX;
  
    // Check loop while head not equal to NULL
    while (head != NULL) {
  
        // If min is greater than head->data then
        // assign value of head->data to min
        // otherwise node point to next node.
        if (min > head->d)
            min = head->d;
  
        head = head->next;
    }
    return min;
}
int largestElement(Node* head)
{
    int max = INT_MIN;
      while (head != NULL) {
        if (max < head->d)
            max = head->d;
        head = head->next;
    }
    return max;
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
            +
            prev=currentNode;
        }
        else{
            prev->next= currentNode;
            prev= currentNode;
        }

    }
    printLinkedList(head);
    printList(head);
    cout << "Maximum element in linked list:";
  
    // Call largestElement() function to get largest
    // element in linked list.
    cout << largestElement(head) << endl;
    cout << "Minimum element in linked list:";
  
    // Call smallestElement() function to get smallest
    // element in linked list.
    cout << smallestElement(head) << endl;
    return 0;
}

