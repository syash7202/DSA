#include<iostream>
using namespace std;


class Dnode {
public:
    int data;
    Dnode* prev;
    Dnode* next;

    Dnode(int data) {
        this->data= data;
        this->prev=nullptr;
        this->next=nullptr;
    }

    ~Dnode() {
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

void insertinDL(int data,int position,  Dnode* &head, Dnode* &tail){

    if (position == 1)
    {
        Dnode* temp = new Dnode(data);
        temp -> next = head;
        head->prev= temp;
        head = temp;
        return;
    }

    Dnode* temp = head;
    int count = 1;
    
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){

    Dnode* temp = new Dnode(data);
    tail -> next = temp;
    temp->prev = tail;
    tail = tail -> next;
    return;

    }
    
    Dnode* insertNode = new Dnode(data);
    insertNode->next = temp->next;
    insertNode->prev = temp;
    temp->next = insertNode;
}

void deleteDnode(int position, Dnode* &head, Dnode* &tail) {

    if (position == 1) {
        Dnode* temp = head;
        head = head->next;
        head->prev= nullptr;
        temp->next = NULL;
        delete temp;

        if (head == NULL) {
            tail = NULL;
        }
    } else {
        Dnode* curr = head;
        Dnode* prev = NULL;

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

void printDL(Dnode* &head){

    Dnode* temp = head;

    while (temp != NULL)
    {
    cout<<temp->data<<" ";
    temp = temp->next; 
    }
    cout<<endl;
    
}


int main(){

    Dnode* node1 = new Dnode(20);
    Dnode* head = node1;
    Dnode* tail = node1;

    insertinDL(5,1,head,tail);
    insertinDL(10,2,head,tail);
    insertinDL(15,2,head,tail);
    insertinDL(25,5,head,tail);
    insertinDL(30,6,head,tail);
    printDL(head);
    cout<<endl;


    deleteDnode(1,head,tail);
    deleteDnode(5,head,tail);
    deleteDnode(3,head,tail);

    printDL(head);
    cout<<endl;
    
    cout<<"head : "<<head->data<<" "<<"tail :"<<tail->data;
    cout<<endl;
    return 0;
}