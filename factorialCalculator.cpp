#include <iostream>
using namespace std;
int main(){
int x,f=1;
cout<<"Enter the number ";
cin>>x;

for(int i=1;i<=x;i++){
    f=f*i;
}
cout<<"the facorial of "<<x<<" is "<<f;

}