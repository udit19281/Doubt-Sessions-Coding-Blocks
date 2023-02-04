#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	    // Print the first half
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                cout<<"*";
            }
            // Calculates spaces
            for (int k = 1; k <= 2 * i - 2; k++) {
                cout<<" ";
            }
            for (int j = 1; j <= n - i + 1; j++) {
                cout<<"*";
            }
            cout<<endl;
        }
        // Print the second half
        for (int i = n; i >= 1; i--) {
            for (int j = i; j <= n; j++) {
                cout<<"*";
            }
            // Calculates spaces
            for (int k = 1; k <= (2 * i) - 2; k++) {
                cout<<" ";
            }
            for (int j = i; j <= n; j++) {
                cout<<"*";
            }
            cout<<endl;
        }
	return 0;
}
