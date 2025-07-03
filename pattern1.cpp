#include <iostream>
using namespace std;
int main() {
    int n;

    cout<<"enter the value of n: ";
    cin>>n; 

    for (int i=1; i<=n; i++) {
        int m = 7;
        for(int j=1; j<=m; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
