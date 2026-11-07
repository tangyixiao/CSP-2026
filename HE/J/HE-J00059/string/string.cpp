#include<iostream>
using namespace std;
int main () {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w" ,stdout);
    int n;
    cin >> n;
    string s, k, b;
    long long a, r;
    cin >> a >> k >> r >> b;
    if (k == b ) {
        cout << '0';
    }
    else if(k != b && a == r){
        cout << n/2*a;
    }
    else {
        cout << max(a, r);
    }
    return 0;


}

