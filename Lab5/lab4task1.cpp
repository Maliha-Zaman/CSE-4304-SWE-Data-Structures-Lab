#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int N, int i)
{
    int current = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[current])
    {
        current = left;
    }
    if (right < N && arr[right] > arr[current])
    {
        current = right;
    }
    if (current != i)
    {
        swap(arr[i], arr[current]);
        heapify(arr, N, current);
    }
}
void buildHeap(int arr[], int N)
{

    int startIndex = N - 1;
    for (int i = startIndex; i >= 0; i--)
    {
        heapify(arr, N, i);//
    }
}
void heapSort(int arr[], int N)
{
    int i = N;
    while (i > 0)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
        i--;
    }
}

int main()
{
    int arr[30],x,i=0, countOfValues = 0;
    cin >> x;
    while (x != -1)
    {
        arr[i] = x;//4 1 3 2 16 9 10 14 8 7
        countOfValues++;//9
        cin >> x;
        i++;
    }
    buildHeap(arr,countOfValues);
    cout<<"Max Heap:";
    for (i=0; i<countOfValues;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    heapSort(arr,countOfValues);
    cout<<"Sorted:";
    for (i=countOfValues;i>0;i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
