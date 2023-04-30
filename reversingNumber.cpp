#include<iostream>
using namespace std;
int main(){
    int x,y,temp=0,z;
    cout<<"Enter the number";
    cin>>x;
    while(x>0){
        z=x%10;
        temp=temp*10+z;
        x=x/10;
    }
    cout<<temp;
}