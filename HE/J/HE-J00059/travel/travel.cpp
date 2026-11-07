#include<iostream>
using namespace std;
int main () {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w" ,stdout);
    string c1, c2, c3, c4;
    cin >>c1 >> c2>> c3>>c4;
    int n, m;
    string a, b;
    n = c2[0, 1];
    m = c4[0, 1];
    a = c2[2];
    b = c4[2];
    if(c1== c3) {
        cout << 1;
    }
    else {
        cout << "0000";
        return 0000;
    }
    if(n== m) {
        cout << 1;
        }
    else {
        cout << "000";
        return 000;
    }
    if (a <= b +  '2' ) {
        cout << 1;
    }
    else {
        cout << "00";
        return 00;
    }
    if(b <= a + '2') {
        cout << 1;

    }
    else {
        cout << "0";
        return 0;
    }


}

