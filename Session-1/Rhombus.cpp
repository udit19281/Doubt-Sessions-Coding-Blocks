#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Print Solid Rhoumbus
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n-i;++j){
            cout<<" ";
        }
        for(int i=1;i<=n;++i){
            cout<<"*";
        }
        cout<<"\n";
    }

    cout<<"\n";
    //Print Hollow Rhoumbus
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n-i;++j){
            cout<<" ";
        }
        for(int j=1;j<=n;++j){
            if(i==1 || i==n){
                cout<<"*";
            }
            else if(j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}