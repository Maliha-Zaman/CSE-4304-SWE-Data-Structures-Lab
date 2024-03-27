#include<bits/stdc++.h>
using namespace std;

class Dynamic_Array
{
public:
    int Size;
    int Capacity;
    int *arr;
    Dynamic_Array()
    {
        Size = 0;
        Capacity = 1;
        arr = new int[Capacity];
    }
    int Get(int i)
    {

        if ((i < 0 ) or (i >= Size))
        {
            cout << "Index out of Range" << endl;
            return -1;
        }
        return arr[i];

    }
    void Set(int i,int val)
    {
        if ((i < 0 ) or (i >= Size))
        {
            cout << " Index out of Range" << endl;
            return;
        }
        arr[i] = val;

    }

    void Reverse()
    {
        int *new_arr = new int(Capacity);
        int j=0;
        for(int i=Size-1;i>=0;i--)
        {
            new_arr[j] == arr[i];
            j++;
        }
        delete(arr);
        arr = new_arr;
    }
    void PushBack(int val)
    {
         if(Size == Capacity)
        {

            int *new_arr;
            Capacity *= 2;
            new_arr = new int[Capacity];
            int k=0;
            for (k = 0; k < Size; k++) {
                new_arr[k] = arr[k];
            }
            delete(arr);
            new_arr[Size] = val;
            arr = new_arr;
            Size++;
        }
        else
        {
            arr[Size] = val;
            Size++;
        }

    }
    int Get_Size()
    {
        return Size;
    }
    int Get_Capacity()
    {
        return Capacity;
    }



};

int main()
{

 Dynamic_Array arr;
    for(int i =0;i<16;i++)
    {
        arr.PushBack(100 + i);
        cout <<"Val: "<< arr.Get(i) <<" Size: "<< arr.Get_Size()<<" Capacity: "<<arr.Get_Capacity()<< endl;
    }



return 0;

}

