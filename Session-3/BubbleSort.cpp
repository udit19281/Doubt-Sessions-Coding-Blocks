#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    bool sorted=false;
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-1-i;++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                sorted=true;
            }
            count++;
        }
        if(!sorted){
            break;
        }
    }
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<count<<"\n";
    return 0;
}