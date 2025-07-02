#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    bool isPrime = true;
    for(int i=2; i<n; i++) {
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true) {
        cout<<"the number "<<n<<" is a prime number.";
    }
    else {
        cout<<"the number "<<n<<" is not a prime number.";
    }
return 0;
}