#include <iostream>
using namespace std;
int binarysearch(int num[],int left,int right,int x)//num=0 2 6 11 12 18 34 45 55 99 
{
while(right>=left)//r=10,l=0
    {
        int mid = left +(right-left)/2;//mid=5
    
    if(num[mid]==x)
    {
        return mid;
    }
    else if(num[mid]>x)
    {
        return binarysearch(num,left,mid-1,x);
    }
    else
    {
        return binarysearch(num,mid+1,right,x);
    }
    }
      return -1;
    

}
int main(void)
{
  int num[1000];
  int x,i,j,n,m;
  cin >> n;
  num[0]==n;//0
  i=1;
  while(1)
  {
    cin >> n;
        if(n!=-1)
        {
            num[i]=n;//2 6 11 12 18 34 45 55 99 
            i++;
        }
        else{
            break;
        }
  }
  
 cin >> x ;
 //cout << i;
  int answer=binarysearch(num,0,i,x);//num=0 2 6 11 12 18 34 45 55 99 -1
  if(answer== -1)
  {
    cout << "-1" <<endl;
  }
  else
  {
    cout << answer << endl;
  }
}