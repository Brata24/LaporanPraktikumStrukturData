#include <iostream>

using namespace std;

struct Student
{
    string name;
    string nim;
};

struct Node
{
    Student data;
    Node *next;
};

class StudentQueue
{
private:
    Node *front;
    Node *back;

public:
    StudentQueue()
    {
        front = nullptr;
        back = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }


    void enqueue(Student student)
    {
        Node *newNode = new Node;
        newNode->data = student;
        newNode->next = nullptr;

        if (isEmpty())
        {
            front = back = newNode;
        }
        else
        {
            back->next = newNode;
            back = newNode;
        }
    }

    Student dequeue()
    {
        if (isEmpty())
        {
            cout << "Antrian mahasiswa kosong" << endl;
            return Student{"", ""};
        }
        else
        {
            Node *temp = front;
            Student student = front->data;
            front = front->next;
            delete temp;

            if (front == nullptr)
            {
                back = nullptr;
            }
            return student;
        }
    }

    int count()
    {
        int count = 0;
        Node *current = front;
        while (current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }

    void clear()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }

    void view()
    {
        cout << "Data antrian mahasiswa:" << endl;
        Node *current = front;
        int i = 1;
        while (current != nullptr)
        {
            cout << "Nama : " << current->data.name << endl;
            cout << "NIM  : " << current->data.nim  << endl;
            cout << endl;
            current = current->next;
            i++;
        }

        if (isEmpty())
        {
            cout << "Antrian mahasiswa kosong" << endl;
        }
    }
};

int main()
{
    StudentQueue studentQueue;

    studentQueue.enqueue(Student{"Andi", "2311102001"});
    studentQueue.enqueue(Student{"Maya", "2311102002"});
    studentQueue.view();
    cout << "Jumlah mahasiswa dalam antrian = " << studentQueue.count() << endl;
    studentQueue.dequeue();
    studentQueue.view();
    cout << "Jumlah mahasiswa dalam antrian = " << studentQueue.count() << endl;
    studentQueue.clear();
    studentQueue.view();
    cout << "Jumlah mahasiswa dalam antrian = " << studentQueue.count() << endl;

    return 0;
}
