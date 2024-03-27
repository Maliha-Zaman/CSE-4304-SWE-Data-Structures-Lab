
#include<bits/stdc++.h>
using namespace std;
int main()

{

  int nums[1000];
    int temp[1000];
    int val,n;
    int j=0;
    cin >> n;
    for(int i=0;i<n;i++)//3 2 2 3
    {
     cin >> nums[i];
    }
    cin >> val;//3
    for(int i=0;i<n;i++)
    {
        if(nums[i]==val)//
        {
            continue;
        }
        else
        {
            temp[j]=nums[i];
            j++;
        }
    }
    for(int k=0;k<j;k++)
    {
        cout << temp[k]<<',';
    }
    for(int k=j;k<n;k++)
    {
        cout <<'_'<<',';
    }
  return 0;
}
