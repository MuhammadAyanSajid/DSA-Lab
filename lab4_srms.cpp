#include <iostream>
#include <string>
using namespace std;

class snode
{
public:
    int studentID;
    string name;
    float gpa;
    snode *nextNode;

    snode(int id, string n, float g):studentID(id), name(n), gpa(g), nextNode(nullptr){}
};

class SLL
{
    snode *headptr;

public:
    SLL()
    {
        headptr = nullptr;
    }

    void addStudent(int id, string name, float gpa)
    {
        snode *newNode = new snode(id, name, gpa);
        
        if (headptr == nullptr)
        {
            headptr = newNode;
            cout << "Student added" << endl;
            return;
        }

        snode *temp = headptr;
        while (temp->nextNode != nullptr)
        {
            temp = temp->nextNode;
        }
        temp->nextNode = newNode;
        cout << "Student added" << endl;
    }

    void searchStudent(int id)
    {
       

        snode *temp = headptr;
        while (temp != nullptr)
        {
            if (temp->studentID == id)
            {
                cout << "Student ID: " << temp->studentID << endl;
                cout << "Name: " << temp->name << endl;
                cout << "GPA: " << temp->gpa << endl;
                return;
            }
            temp = temp->nextNode;
        }
        cout << "not found";
    }

    void updateGPA(int id, float newGPA)
    {
        

        snode *temp = headptr;
        while (temp != nullptr)
        {
            if (temp->studentID == id)
            {
                temp->gpa = newGPA;
                cout << "GPA updated\n";
                return;
            }
            temp = temp->nextNode;
        }
        cout << "Student not found\n";
    }

    void deleteStudent(int id)
    {
        if (headptr->studentID == id)
        {
            snode *temp = headptr;
            headptr = headptr->nextNode;
            delete temp;
            cout << "Student record deleted" << endl;
            return;
        }

        snode *temp = headptr;
        while (temp->nextNode != nullptr && temp->nextNode->studentID != id)
        {
            temp = temp->nextNode;
        }

        if (temp->nextNode == nullptr)
        {
            cout << "Student not found\n";
            return;
        }

        snode *nodeToDelete = temp->nextNode;
        temp->nextNode = temp->nextNode->nextNode;
        delete nodeToDelete;
        cout << "Student record deleted" << endl;
    }

    void displayAll()
    {
        snode *temp = headptr;
        int count = 1;
        while (temp != nullptr)
        {
            cout << "Student " << count++ << ":" << endl;
            cout << "ID: " << temp->studentID << endl;
            cout << "Name: " << temp->name << endl;
            cout << "GPA: " << temp->gpa << endl;
            temp = temp->nextNode;
        }
    }

    ~SLL()
    {
        snode *temp;
        while (headptr != nullptr)
        {
            temp = headptr;
            headptr = headptr->nextNode;
            delete temp;
        }
    }
};

int main()
{
    SLL studentList;
    int choice, id;
    string name;
    float gpa;
    studentList.addStudent(0, "bilal", 2.99);
    studentList.addStudent(1, "ayan", 3.1);
    studentList.addStudent(2, "rehan", 4);

    studentList.searchStudent(0);

    studentList.updateGPA(1, 4);

    studentList.deleteStudent(2);

    studentList.displayAll();
    return 0;
}