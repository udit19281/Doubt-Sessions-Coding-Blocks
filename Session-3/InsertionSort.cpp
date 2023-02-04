#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;++i){
        int current = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]> current){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=current;
        
    }
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}