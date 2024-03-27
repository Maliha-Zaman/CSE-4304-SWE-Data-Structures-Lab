#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue<int>friends;
    int n,k,key,m;
    cin >> n;
    cin >> k;//5
    m=k;

    for(int i=1;i<=n;i++)
    {
        friends.push(i);//1,2,3,4,5,6

    }
    while(friends.size()!=1)//
    {
            if(k>1)
           { key=friends.front();
             friends.pop();
            friends.push(key);
            k--;
           }

        else
        {
        friends.pop();
        k=m;
        }
    }
    cout << friends.front();
    return 0;
}

