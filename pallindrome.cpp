#include <iostream>
#include <string>
using namespace std;

int main(){
    while(1){
    string name;
    int temp=0;
    cout<<"Enter the name\n";
    cin>>name;
    int l=0,r=name.size()-1;
    while(l<r){
        if(name[l]==name[r]){
            l++;
            r--;
            temp=0;
            continue;
        }else{
            temp=1;
            break;
        }
    }
    if(temp==0){
        cout<<"it is a pallindrome\n";

    }else{
        cout<<"it is not a pallindrome\n";
    }
    continue;}
}