#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next, *pre;
    node(int d) : data(d), next(nullptr), pre(nullptr){}
    
};

class DCLL
{

public:
    node *tail;
    int size;
    DCLL() : tail(nullptr),size(0){}
    void insertAtHead(node* newNode){
        if(tail!=nullptr){
            node *temp = tail->next;
            newNode->next = temp;
            newNode->pre = tail;
            temp->pre = newNode;
            tail->next = newNode;
            size++;
            return;
        }
        tail = newNode;
        newNode->next = newNode;
        newNode->pre = newNode;
        size++;
    }

    void insertAtTail(node* newNode){
        if(tail!=nullptr){
            node *temp = tail->next;
            newNode->next = temp;
            newNode->pre = tail;
            temp->pre = newNode;
            tail->next = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail = newNode;
        newNode->next = newNode;
        newNode->pre = newNode;
        size++;
    }

    void insertAtPos(node* newNode, int pos){
        if(pos==0||tail==nullptr){
            insertAtHead(newNode);
            return;
        }
        if(tail!=nullptr){
            node *temp = tail;
            while(temp->pre!=nullptr){
                temp = temp->pre;
            }
            if(pos >= size){
                insertAtTail(newNode);
                return;
            }
            node *temp = tail->next;
            for (int i = 0; i < pos - 1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->pre = temp;
            temp->next->pre = newNode;
            temp->next = newNode;
            size++;
            return;
        }
    }
    void deleteAtTail(){
        if(tail!=nullptr){
            if(tail->next==tail){
                delete tail;
                tail = nullptr;
                size--;
                return;
            }
            node *temp = tail;
            tail = tail->pre;
            tail->next = temp->next;
            temp->next->pre = tail;
            size--;
            delete temp;
        }
        
    }
    void deleteAtHead(){
        if(tail!=nullptr){
            if(tail->pre==tail){
                delete tail;
                tail = nullptr;
                size--;
                return;
            }
            node *temp = tail->next;
            tail->next = temp->next;
            temp->next->pre = tail;
            delete temp;
            size--;
        }
    }

    void deleteAtPos(int pos){
        if(pos==0){
            deleteAtHead();
            return;
        }
        if(tail!=nullptr){
            if(pos >= size-1){
                deleteAtTail();
                return;
            }
            node *rptr = tail->next;
            for (int i = 0; i < pos-1; i++){
                rptr = rptr->next;
            }
            node *temp = rptr->next;
            rptr->next = temp->next;
            temp->next->pre=rptr;
            delete temp;
            size--;
        }
    }
};




int main(){


}