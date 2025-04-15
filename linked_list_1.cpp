#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;


    node(int val):data(val),next(nullptr){}

};
node *first;
node *last;
int len=0;
void element_at_the_start(int val){
    node* newnode= new node(val);
    if (first==nullptr && last==nullptr){

        first=newnode;
        last=newnode;
        len++;
    }
    else{
        newnode->next=first;
        first = newnode;
        len++;
    }



}
void display_linkedlist(){
     node* current=first;
     int position=1;

     cout<<"----linked-list(position:value)----"<<endl;
     while(current != nullptr){
        cout <<position<<":"<<current->data;
             if (current->next!=nullptr){
                cout<<"-->";
             }
        current=current->next;
        position++;
     }
    cout<<endl;
        cout<< "length of the linked list---"<<len<<endl;
    cout<< endl;

}


int main(){
    int val;
    int n;
    cout<<"how many values you want to enter in linked list";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"enter the value you want to add at first in linked list:";
    cin>>val;
    element_at_the_start(val);


}
    display_linkedlist();
    return 0;
}
