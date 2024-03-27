
#include<bits/stdc++.h>

using namespace std;

    struct node
{
    int val;
    node * next;
};

class Singly_linked_list{
public:
    node *head, *tail;

    Singly_linked_list()
    {
        head = nullptr;
        tail = nullptr;
    }

    void PushBack(int n)
    {
         node* newNode = new node();// new node
        newNode->val = n;//value assign
        newNode->next = nullptr;//points null pointer
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            tail = newNode;//points tail pointer
        }
    }

    void display()
    {
        node *cur = head;

        while(cur != nullptr)
        {
            cout << cur->val << endl;
            cur = cur->next;
        }
        cout<<endl;
    }

    void Copy(int t)//3
    {
        node* cur = head; //1
        int arr[t], i=0;
        while(cur != nullptr)
        {
            arr[i] = cur->val;//1 2 3
            cur = cur->next;
            i++;
        }
        for(int i=t/2;i<t;i++)//
        {
            cout << arr[i] << " ";//2,3
        }
    }

   void Reverse()
    {

        node* prev = nullptr;
        node* curr = head;
        while (curr) {
            node* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        tail = head;
        head = prev;

    }
     int PopBack(int n)
    {   //4 5 6
        node* cur = head;
        while(cur->next!=tail)
        {
            cur = cur->next;//traversing through the list until my next pointer is tail
        }
        int key;
        key = tail->val;//storing the value of the last node
        cur->next = nullptr;//second last pointer now points to nullptr
        tail = cur;
        return key;
    }

};
int main()
{
    Singly_linked_list a;
    int t, temp;
    int arr[t];
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> arr[i];
    }

    a.Copy(t);
    return 0;
}

