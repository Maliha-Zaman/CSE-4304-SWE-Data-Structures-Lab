#include<iostream>
#include<stack>
using namespace std;
bool Preorder(int arr[], int n)
{
  stack<int> s;

  int root=0;

  for (int i=0; i<n; i++)
  {

    if (arr[i] < root)
      return false;

    while (!s.empty() && s.top()<arr[i])
    {
      root = s.top();
      s.pop();
    }

    s.push(arr[i]);
  }
  return true;
}
int main()
{
  int n,i=0;
  cin>>n;
  int arr[n];
  while(n--)
  {
      cin>>arr[i];
      i++;
  }
  int l=sizeof(arr)/sizeof(arr[0]);
  if(Preorder(arr, l))
  {
    cout << "Valid Preorder Sequence\n";
  }
  else if(!Preorder(arr,l))
  {
    cout << "Invalid Preorder Sequence\n";
  }


}
