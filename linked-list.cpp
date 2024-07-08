#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node() {
        int value = this->data;
        //free memory
        if (this->next !=NULL)
        {
            delete next;
            this->next = NULL;
        }
        
        cout<<"memory is free for data : "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node * &tail, int data){

    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void inserteAtPosition(Node* &head, Node* tail, int data, int position){

    if (position == 1)
    {
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;
    
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* insertNode = new Node(data);
    insertNode->next = temp->next;
    temp->next = insertNode;

}


void deleteNode(int position, Node* &head, Node* &tail) {
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        if (head == NULL) {
            tail = NULL;
        }
    } else {
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while (count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;

        if (curr->next == NULL) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}


void printLL(Node* &head){

    Node* temp = head;

    while (temp != NULL)
    {
    cout<<temp->data<<" ";
    temp = temp->next; 
    }
    cout<<endl;
    
}


int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,100);
    insertAtTail(tail,50);
    inserteAtPosition(head,tail,5,1);
    inserteAtPosition(head,tail,20,2);
    inserteAtPosition(head,tail,40,4);
    inserteAtPosition(head,tail,60,5);
    inserteAtPosition(head,tail,70,6);
    printLL(head);

    deleteNode(1,head,tail);
    deleteNode(7,head,tail);


    cout<<endl;
    
    cout<<"head : "<<head->data<<" "<<"tail :"<<tail->data;
    cout<<endl;
    return 0;
}