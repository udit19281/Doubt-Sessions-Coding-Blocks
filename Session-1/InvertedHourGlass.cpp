#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;++i){
        for(int j=n;j>=n-i;--j){
            cout<<j<<" ";
        }
        for(int j=0;j< (2*n)-(2*i)-1;++j){
            cout<<"  ";
        }
        int k=n-i;
        if(i==n){
            k++;
        }
        for(int j=k;j<=n;++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=0;--i){
        for(int j=n;j>=n-i;--j){
            cout<<j<<" ";
        }
        for(int j=0;j< (2*n)-(2*i)-1;++j){
            cout<<"  ";
        }
        int k=n-i;
        if(i==n){
            k++;
        }
        for(int j=k;j<=n;++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}