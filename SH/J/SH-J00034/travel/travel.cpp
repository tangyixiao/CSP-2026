#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 != c2){
        cout << "0000";
        return 0;
    }
    cout << 1;
    string str1 = s1.substr(0,2),str2 = s2.substr(0,2);
    if (str1 != str2) {
        cout << "000";
        return 0;
    }
    cout << 1;
    char a1 = s1[2],a2 = s2[2];
    if ((a1 <= 'C' && a2 <= 'C') || (a1 > 'C' && a2 > 'C')){
        cout << 1;
        if ((abs(a1 - a2) == 1) || (a1 == 'F' && a2 == 'D') || (a2 == 'F' && a1 == 'D')) cout << 1;
        else cout << 0;
    }else cout << "00";
    return 0;
}
