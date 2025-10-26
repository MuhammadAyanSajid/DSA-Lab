#include <iostream>
using namespace std;

class snode
{
    int data;
    snode *nextNode;

public:
    snode(int data)
    {
        this->data = data;
        nextNode = nullptr;
    }
    snode *getNextNode()
    {
        return nextNode;
    }
    void setNextNode(snode *n)
    {
        nextNode = n;
    }
    int getData()
    {
        return data;
    }
};

class SLL
{
    snode *headptr;

public:
    SLL()
    {
        headptr = nullptr;
    }
    void insert(snode *newNode)
    {
        if (headptr == nullptr)
            headptr = newNode;
        else
        {
            snode *rptr = headptr;
            while (rptr->getNextNode() != nullptr)
            {
                rptr = rptr->getNextNode();
            }
            rptr->setNextNode(newNode);
        }
    }
    void display()
    {
        snode *temp = headptr;
        while (temp != nullptr)
        {
            cout << temp->getData() << " -> ";
            temp = temp->getNextNode();
        }
        cout << "NULL" << endl;
    }
    void deletionAtAnyPos(int pos)
    {
        if (pos == 0)
        {
            snode *temp = headptr;
            headptr = headptr->getNextNode();
            delete temp; // Add this line
            return;
        }

        snode *prev = headptr;
        snode *curr = headptr->getNextNode();
        int i = 1;

        while (curr != nullptr && i < pos)
        {
            prev = curr;
            curr = curr->getNextNode();
            i++;
        }

        if (curr == nullptr)
        {
            return;
        }

        prev->setNextNode(curr->getNextNode());
        delete curr;
    }
};

int main()
{
    SLL list;

    snode *node1 = new snode(10);
    snode *node2 = new snode(20);
    snode *node3 = new snode(30);

    list.insert(node1);
    list.insert(node2);
    list.insert(node3);

    cout << "Linked List: ";
    list.display();

    
    
    return 0;
}
