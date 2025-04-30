#include<iostream>
#include<array>
using namespace std;

void find_index(int num,array<int,5>arr, int len){
    for (int i=0;i<len;i++){
        for (int j=(i+1);j<len;j++){
                if (num==arr[i]+arr[j]){
                    cout << num << " is the sum of the " << i << " and " << j << " index numbers";
                    cout << " and the numbers are " << arr[i] << " and " << arr[j] << endl;


                }


        }


    }


}

int main(){
    int num=7;
    array<int,5>arr={1,2,3,4,5};
    int len=arr.size();
    find_index(num,arr,len);

 return 0;
}

