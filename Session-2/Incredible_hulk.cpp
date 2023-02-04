#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        while(n){
            n = n & (n-1);
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
