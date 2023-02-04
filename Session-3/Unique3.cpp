#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;

    for(int i=0;i<32;++i){
        int num=(1<<i);
        int sum=0;
        for(int j=0;j<n;j++){
            if(arr[j]&num){
                sum++;
            }
        }
        cout<<i<<", "<<num<<", "<<sum<<"\n";
        if(sum%3!=0){
            ans|=num;
        }
    }
    cout<<ans<<"\n";
    return 0;
}