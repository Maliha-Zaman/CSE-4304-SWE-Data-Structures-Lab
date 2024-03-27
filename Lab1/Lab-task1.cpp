#include <iostream>
using namespace std;

int main()
 {
    int num[1000];
    int i=1,j,c=1,n,m,k,count,l;
    cin >> n;
    num[0]=n;
    while(1)
    {
        cin >> m;
        num[i]=m;// 3 4 5 7 8 9 2 3 3 4 4 5 6 0
        i++;
        c++;
        if(m<=0)
        {
            break;
        }
        else
        {
            continue;
        }

    }

     for(j=0;j<c;j++)
     {
       
        if(num[j]==0)
           {
            continue;
           }
           else
           {
             count=1;
        cout << num[j] <<"occurs:";
        for(k=j+1;k<c;k++)
        {  
           if(num[j]==num[k] && num[j]!=0)
           {
             count++;
             num[k]=0;
           }
          
        }
           }
           if(count >1)
           {cout << count<< "times"<<endl;}
           else
           {
            cout << count<< "time"<<endl;
           }
           
    }
 return 0;
 }



 