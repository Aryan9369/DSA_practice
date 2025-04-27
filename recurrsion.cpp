#include<iostream>
using namespace std;
//print the counting using recurrsion
void fun(int n){
    if (n==0){
        return;
    }
    if (n>=1){
      cout<< n <<endl;
    }
    fun(n-1);//update and self-calling


}
int main(){
    int n;
    cout<<"enter  a number";
    cin>>n;
    fun(n);

}
