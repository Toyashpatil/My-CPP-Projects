# include <iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    int partialans=factorial(n-1);
    return n*partialans;
}

int main(){
    int n;
    cout<<"Enter the number whose you want to find the factorial";
    cin>>n;
    cout<<factorial(n);

}