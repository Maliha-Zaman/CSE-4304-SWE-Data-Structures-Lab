#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>map1;
    string arr[100];
    int i=0;
    string str;
    cin >> str;
    while(str!="-1")
    {
       map1[str]=i;
       i++;
       cin>>str;
    }
    cin >> str;
    i=0;
    while(str!="-1")
    {
        arr[i]=str;
        i++;
        cin >> str;
    }
    int x;
    x=i;
    for(int i=0;i<x;i++)
    {
        if(map1.find (arr[i])== map1.end())
           {
               cout << "NO";
               return 0;
           }
           else
            {
                continue;
            }
    }
    cout << "YES";
    return 0;
}
