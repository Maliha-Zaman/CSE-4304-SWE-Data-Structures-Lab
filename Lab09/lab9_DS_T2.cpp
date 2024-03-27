#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,x,j;
    int i=0;
    cin >> n;
    while(n!=-1)
    {
        arr[i]=n;
        i++;
        cin >> n;
    }
    cin >> x;
    n=i;
    int temp=0;
    for(int j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(arr[j]+arr[i]==x)
            {
                cout << "(" << arr[i]<<","<< arr[j]<<")"<<"";
                temp=1;
                break;
            }
        }
    }
    if(temp==0)
    {
        cout << "No pairs found";
    }

    return 0;
}
