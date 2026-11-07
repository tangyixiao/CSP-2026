#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int check(char a, char b){
    int x = a - 'A', y = b - 'A';
    if (x == 0){
        if (y == 1) return 1;
        if (y == 2) return 2;
        return 0;
    }
    if (x == 1){
        if (y == 0 || y == 2) return 1;
        return 0;
    }
    if (x == 2){
        if (y == 0) return 2;
        if (y == 1) return 1;
        return 0;
    }
    if (x == 3){
        if (y == 4) return 1;
        return 0;
    }
    if (x == 4){
        if (y == 3) return 1;
        return 0;
    }
}
int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2) cout << 1;
    else cout << 0;
    if (s1[0] == s2[0] && s1[1] == s2[1]) cout << 1;
    else cout << 0;
    int m = check(s1[2], s2[2]);
    cout << min(1, m);
    if (m == 1) cout << 1;
    else cout << 0;
}
