#include <iostream>
using namespace std;

void merge_arr(int arr1[], int arr2[],int n , int m){
    int i=0,j=0,k=0;


    int temp[n+m];
   while (i<n && j<m){
    if (arr1[i]<arr2[j]) {
        temp[k]=arr1[i];
        i++;
        k++;
    }
    else{
        temp[k]=arr2[j];
        j++;
        k++;

        }


   }

    while (i<n){
        temp[k]=arr1[i];
        k++;
        k++;
    }
    while(j<m){
        temp[k]=arr2[j];
        j++;
        k++;
    }


   for (int i=0;i<(n+m);i++){
    cout<<temp[i]<< " ";
   }

}

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    merge_arr(arr1,arr2,n,m);

   return 0;
}


