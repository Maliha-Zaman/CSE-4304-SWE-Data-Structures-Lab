 #include <iostream>
#include <queue>
using namespace std;
int main()
{queue<int>Q;
int n,i=0;
int arr[1000];
while(1)
{    cin >> n;// 2 3 2 -1
    if(n!=-1)
    {
        Q.push(n);// 2 3 2
        arr[i]=n;// 2 3 2
        i++;
    }
    else
    {
        break;
    }
}
int count=0,j=0;
cin >> n;//2
    int k = arr[n];//3
    while(Q.size()!=0)
    {
        if(Q.front()>=k)//
        {
            if(j<=n)//
            {
                count += k;
                Q.pop();
                j++;
            }
            else
            {
                count += k-1;//c=2
                Q.pop();//pop 2
                j++;//j=1
            }
        }
        else
        {
            count += Q.front();
            Q.pop();
            j++;
        }
    }
    cout << count;

return 0;
}
