#include <bits/stdc++.h>
using namespace std;

int main()
{   priority_queue<int>stones;
    int n,count=0,x,y,newY;
    cin >> n;
    while (n != -1)
    {
        stones.push(n);//8 7 4 2 1 1 //7 4 2 1 1//4 2 1 1 1  // 2 1 1 1// 2 1 1 1 // 1 1 1 //1
        count++;
        cin >> n;
    }
    while(stones.size()>1){
        x = stones.top();//x=8,4,2,1
        stones.pop();
        y=stones.top();//y=7,2,1,1
        if(x==y){
            stones.pop();
        }
        else{
             newY=x -y ;//1,2,1
            stones.pop();
            stones.push(newY);//
        }
    }
    if(!stones.empty()){
        cout<<stones.top()<<endl;

    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
