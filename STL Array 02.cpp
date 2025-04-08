

#include<iostream>
using namespace std;
#include <typeinfo>
#define SIZE 10
#include <array>

void change(int A[]) //ARRAY BY DEFAULT IS CALL BY REFERENCE-Pointers internally
{
    for (int i=0;i<SIZE;i++)
    {
        A[i]+=5;

    }
}
void display(int A[])
{
    cout<<endl;
    for (int i=0;i<SIZE;i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
}
void display(array<int,SIZE> arr)
{
    cout<<endl;
    for (int i=0;i<SIZE;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}




int main()
{
    int A[SIZE]={1,2,3}; //1 2 3 and rest all zeros
    array<int,SIZE>arr ={1,2,3};

    display(A);
    change(A);
    display(A);

    display(arr);

    //Sizes of A&B are fixed at compile time and can't be changed in program

}
