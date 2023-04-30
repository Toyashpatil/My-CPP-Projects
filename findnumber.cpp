#include <iostream>
using namespace std;
void arrgenerator(int arr[],int k){
for(int j=0;j<k;j++){
    cout<<"Enter the element at index "<<j<<" ";
    cin>>arr[j];
}
}

int main(){
int n;
cout<<"Enter the length of the array";
cin>>n;
int arr[n];
arrgenerator(arr,n);

int k;int count;
cout<<"The element you want to know about"<<" ";
cin>>k;
for(int i=0;i<n;i++){
    if(arr[i]==k){
        cout<<"yess";
    }else{
        count=0;
        continue;
    }
}
if(count==0){
    cout<<"No";
}

}