#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[], int N, int i)
{
    int current = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] < arr[current])
    {
        current = left;
    }

    if (right < N && arr[right] < arr[current])
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
    int st = N - 1;
    for (int i = st; i >= 0; i--)
    {
        heapify(arr, N, i);
    }
}
int Heap_Minimum(int heap[])
{
    return heap[0];
}
void Heap_extract_min(int heap[], int &countOfValues)
{
    heap[0] = heap[countOfValues - 1];
    countOfValues--;
}

void insertNode(int heap[], int& countOfValues, int val)
{

    countOfValues++;

    heap[countOfValues-1] = val;

    buildHeap(heap, countOfValues);
}

int main()
{
    int arr[30],x,i=0, countOfValues = 0;
    cin >> x;
    while (x != -1)
    {
        arr[i] = x;
        countOfValues++;
        cin >> x;
        i++;
    }
    buildHeap(arr, countOfValues);
    cout << "Min Heap: ";
    for (int i = 0; i < countOfValues; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cin >> x;
    if (x == 1)
    {
        cout << Heap_Minimum(arr);
    }
    else if (x == 2)
    {
        cout<<arr[0]<<endl;
        Heap_extract_min(arr, countOfValues);
        cout << "Min Heap:";
        for (int i = 0; i < countOfValues; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        int y;
        cin>>y;
        insertNode(arr, countOfValues, y);
        cout<<arr[0]<<endl;
        cout << "Min Heap:";
        for (i = 0; i < countOfValues; i++)
        {
            cout << arr[i] << " ";
        }

    }

    return 0;
}
