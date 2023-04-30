# include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if((i+j)<3){
                cout<<" ";
            }else{
                cout<<"* ";
            }
        }cout<<"\n";
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if((j>=i)){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }cout<<"\n";
    }
    
}