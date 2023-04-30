#include <iostream>
using namespace std;

int main(){
char x;
int n=4;
cout<<"alphabet";

cin>>x;
for(int i=0;i<n;i++){
    for(int j=0; j<n;j++){
        if((i+j)<(n-1)){
            cout<<" ";
        
        }else{
            for(int k=0;k<=i;k++){
            cout<<(char)(x+k);
            }
        }
        }cout<<"\n";
    }
}

    
    


