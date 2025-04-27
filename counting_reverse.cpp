#include<iostream>
using namespace std;
//print the counting using recurrsion

int sum1(int i){
    int n=0;
    n+=i;
    return n;

}

int fun(int i,int n)//i=start,n=end
{
    int sum1=0;
    if (n==0){
        return n;
    }
    if(i<=n)//start<=end
        {




      cout<< i <<endl;

      fun(i+1,n);

    }
    //fun(n-1);//update and self-calling ,here stack binding and stack and unbinding

    //cout<<n<<"--call"<<endl;
return sum1;
}

int main(){
    int i=1;
    int n;
    cout<<"enter  a number";
    cin>>n;


    int sum=fun(i,n);
    cout<<sum;

}
