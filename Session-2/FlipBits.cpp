#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int ans=0;
    int maxDifference = 0;
    for(int i=0;i<n;i++){
        if(ar[i]){
            ans++;
        }
        int c0=0, c1=0;
        for(int j=i;j<n;++j){
            //subarray from i to j
            cout<<i<<","<<j<<" ";
            if(ar[j]){
                c1++;
            }
            else{
                c0++;
            }
        maxDifference = max(maxDifference, c0-c1);
        }
        cout<<endl;
        
    }
    ans+=maxDifference;
    cout<<ans<<endl;
    return 0;
}
