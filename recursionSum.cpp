# include <iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1; 
    int  partialans=sum(n-1);
    return n+partialans;
}

int main(){
    int n;
    cout<<"Enter the number upto which you want to find sum";
    cin>>n;
    cout<<sum(n);
}