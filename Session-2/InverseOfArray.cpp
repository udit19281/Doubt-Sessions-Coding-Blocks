#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    vector<int> inverse(n);
    for(int i=0; i<n; i++){
        inverse[array[i]] = i;
    }
    for(auto i: inverse){
        cout<<i<<" ";
    }

    return 0;
}
