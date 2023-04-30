#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numbers of rows";
    cin>>n;
    char k='a';
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(i+j>=n-1){
                cout<< char(k);
                k=k+1;
            }else{
                cout<<" ";
            }
        }cout<<"\n";
        k='a';
    }
}