#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue<int>student;
    queue<int>sandwich;
    int n;
    cin >> n;
    int key;
    for(int i=0;i<n;i++)
    {
        cin >>key;
        student.push(key);
    }
     for(int i=0;i<n;i++)
    {
        cin >>key;
        sandwich.push(key);
    }
     for(int i=0;i<n*2;i++)
    {
        if(student.front()==sandwich.front())
        {   if(student.size()==0)
        {
            cout << 0;
            return 0;
        }
            student.pop();
            sandwich.pop();
        }
        else
        {   key=student.front();  //       1 1 1
                                   // 0 1 1
            student.pop();
            student.push(key);
        }
    }
    cout << sandwich.size()<<endl;
    return 0;
}
