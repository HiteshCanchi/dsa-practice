#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    
    cout<<"enter n: ";
    cin>>n; 

    for (int i=3; i<=n; i=i+3) {
        
         sum = sum + i;
    }
    cout<<"the sum of factors of 3 upto n is "<<sum;

}