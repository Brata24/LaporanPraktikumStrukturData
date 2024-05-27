#include <iostream>

using namespace std;

struct Node
{
    string data;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = nullptr;
        back = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    bool isFull()
    {
        return false;
    }

    void enqueueAntrian(string data)
    {
        Node *newNode = new Node;
        newNode->data = data;
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

    void dequeueAntrian()
    {
        if (isEmpty())
        {
            cout << "Antrian kosong" << endl;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            delete temp;

            if (front == nullptr)
            {
                back = nullptr;
            }
        }
    }

    int countQueue()
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

    void clearQueue()
    {
        while (!isEmpty())
        {
            dequeueAntrian();
        }
    }

    void viewQueue()
    {
        cout << "Data antrian teller:" << endl;
        Node *current = front;
        int i = 1;
        while (current != nullptr)
        {
            cout << i << ". " << current->data << endl;
            current = current->next;
            i++;
        }

        if (isEmpty())
        {
            cout << "Antrian kosong" << endl;
        }
    }
};

int main()
{
    Queue antrianTeller;

    antrianTeller.enqueueAntrian("Andi");
    antrianTeller.enqueueAntrian("Maya");
    antrianTeller.viewQueue();
    cout << "Jumlah antrian = " << antrianTeller.countQueue() << endl;
    antrianTeller.dequeueAntrian();
    antrianTeller.viewQueue();
    cout << "Jumlah antrian = " << antrianTeller.countQueue() << endl;
    antrianTeller.clearQueue();
    antrianTeller.viewQueue();
    cout << "Jumlah antrian = " << antrianTeller.countQueue() << endl;

    return 0;
}