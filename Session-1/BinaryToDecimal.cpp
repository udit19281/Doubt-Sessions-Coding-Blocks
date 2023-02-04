#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int base=1;
        while(n){
            int lastbit=n%10;
            if(lastbit==1){
                ans+=base;
            }
            n=n/10;
            base=base*2;
        }
        cout<<ans<<"\n";
    }
    return 0;

    return 0;
}