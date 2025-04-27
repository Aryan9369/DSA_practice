#include<iostream>
using namespace std;
//print the counting using recurrsion
void fun(int n){
    if (n==0){
        return;
    }
    if (n>=1){

      cout<< n <<"-aryan"<<endl;

    }
    fun(n-1);//update and self-calling ,here stack binding and stack and unbinding

    cout<<n<<"--call"<<endl;


}
int main(){
    int n;
    cout<<"enter  a number";
    cin>>n;
    fun(n);

}
