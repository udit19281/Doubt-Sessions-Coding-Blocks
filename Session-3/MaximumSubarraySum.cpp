#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=INT_MIN;
    for(int i=0; i<n; i++){
        int subarraysum=0;

        for(int j=i; j<n; j++){
            //i,j subarray
            subarraysum+=arr[j];
            sum=max(sum, subarraysum);
            // cout<<i<<","<<j<<","<<subarraysum<<" ";
        }
        // cout<<endl;
    }
    cout<<sum<<"\n";

    return 0;
}