#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue <pair<int,bool>, vector<pair<int,bool>>, greater<pair<int,bool>>> pq;
    int N; //3
    cin >> N;
    while(N--)
    {
        int a, b;
        cin >> a >> b;//0 30
                     // 5 10
                      //15 20


        pq.push({a,true});//0 5 10 15 20 30// 5 10 15 20 30//10 15 20 30//15 20 30

        pq.push({b,false});
    }
    int checkRoom = 0;
    int maxRoom = 0;
    while(!pq.empty())
    {
        if(pq.top().second)
        {
            checkRoom++;//1//2
        }
        else if(!pq.top().second)
        {
            checkRoom--;//1
        }
        maxRoom = max(maxRoom, checkRoom);//1//2//2
        pq.pop();
    }
    cout << maxRoom <<endl;
    return 0;
}
