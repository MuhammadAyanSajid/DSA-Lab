#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next, *pre;
    node(int d) : data(d), next(nullptr), pre(nullptr){}
    
};

class DLL
{

public:
    node *tail;
    DLL() : tail(nullptr){}
    void insertAtHead(node* newNode){
        if(tail!=nullptr){
            node *rptr = tail;
            while(rptr->pre!=nullptr)
                rptr = rptr->pre;
            newNode->next = rptr;
            rptr->pre = newNode;
            return;
        }
        tail = newNode;
    }

    void insertAtTail(node* newNode){
        if(tail!=nullptr){
            tail->next=newNode;
            newNode->pre = tail;
        }
        tail = newNode;
    }

    void insertAtPos(node* newNode, int pos){
        if(pos==0){
            insertAtHead(newNode);
            return;
        }
        if(tail!=nullptr){
            int length = 1;
            node *temp = tail;
            while(temp->pre!=nullptr){
                temp = temp->pre;
                length++;
            }
            if(pos >= length){
                insertAtTail(newNode);
                return;
            }
            for (int i = 0; i < pos - 1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->pre = temp;
            temp->next->pre = newNode;
            temp->next = newNode;
            return;
        }
        tail = newNode;
    }
    void deleteAtTail(){
        if(tail!=nullptr){
            if(tail->pre==nullptr){
                delete tail;
                tail = nullptr;
                return;
            }
            node *temp = tail;
            tail = tail->pre;
            tail->next = nullptr;
            delete temp;
        }
    }
    void deleteAtHead(){
        if(tail!=nullptr){
            if(tail->pre==nullptr){
                delete tail;
                tail = nullptr;
                return;
            }
            node *rptr = tail;
            while(rptr->pre!=nullptr){
                rptr = rptr->pre;
            }
            node *temp = rptr;
            rptr->next->pre = nullptr;
            delete temp;
            
        }
    }

    void deleteAtPos(int pos){
        if(pos==0){
            deleteAtHead();
            return;
        }
        if(tail!=nullptr){
            int length = 1;
            node *rptr = tail;
            while(rptr->pre!=nullptr){
                rptr = rptr->pre;
                length++;
            }
            if(pos >= length-1){
                deleteAtTail();
                return;
            }
            for (int i = 0; i < pos-1; i++){
                rptr = rptr->next;
            }
            node *temp = rptr->next;
            rptr->next = temp->next;
            temp->next->pre=rptr;
            delete temp;
        }
    }
};




int main(){


}