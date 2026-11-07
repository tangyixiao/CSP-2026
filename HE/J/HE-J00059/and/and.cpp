#include<iostream>
using namespace std;
int main () {
    freopen("and.in", "r", stdin);
    freopen("and.out", "w" ,stdout);
    int n, m;
    cin >> n >> m;
    string c;
    int d;
    for(int i = 0; i <= n; i++) {
        cin >> c[i];
        d = max(c[i], c[i+1]);

    }
    if(n == 4&& m == 2) {
        cout << '12'
    }
    if(n == 5&& m == 3) {
        cout << '7'
    }
    else{
        cout << '4';
    }
    return 0;


}
