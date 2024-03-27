#include <bits/stdc++.h>
using namespace std;
int main()
{
 priority_queue<int,vector<int>,greater<int>>cookie;
 int N,K,i,a,count=0;
 cin>>N;//6
 cin>>K;//7
 for(i=0;i<N;i++)
{  cin>>a;
   cookie.push(a);//12 9 1 3 10 2//1 2 3 9 10 12
}
    if(N==1 && cookie.top()<K){
        cout<<-1<<endl;
        return 0;
    }
    while(!cookie.empty()){
        if(cookie.top()>=K){
            cookie.pop();
            continue;
        }
        int temp = cookie.top();//3
        cookie.pop();//
        temp += 2*cookie.top();//13
        cookie.pop();//
        cookie.push(temp);//
        count++;//2
    }
    cout<<count<<endl;
    return 0;
}
