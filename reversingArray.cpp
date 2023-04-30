#include <iostream>
# include <string>
using namespace std;

int main(){
    string x;
    int temp;
    cout<<"enter the array";
    cin>>x;
    int l=0,r=x.size()-1;
    while(l<r){
        temp=x[l];
        x[l]=x[r];
        x[r]=temp;
        l++;
        r--;
    }
    cout<<"The reversed array is"<<x;
}