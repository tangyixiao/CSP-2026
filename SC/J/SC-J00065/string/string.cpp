#include<bits/stdc++.h>
using namespace std;

int duan, a = 0;
string he;

int main() {
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> duan;
    for (int i = 0; i < duan; i++) {
        int geshu;
        string dan;
        cin >> geshu >> dan;
        for (int j = 0; j < geshu; j++) {
            he += dan;
        }

    }
    for (int i = 0; i < he.size(); i++) {
        if (he[0+i] != he[he.size() - 1 - i]) {
            a += 1;
        }
    }
    cout << a / 2;
    return 0;
}