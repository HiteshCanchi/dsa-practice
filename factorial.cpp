#include <iostream>
using namespace std;

int main() {
    int n = 5,pro=1;

    for(int i=1; i<=n; i++) {
        pro = pro*i;
    }
    cout<<"the factorial of "<<n<<" is: "<<pro;
    return 0;
}