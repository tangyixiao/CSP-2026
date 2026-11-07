#include<bits/stdc++.h>
using namespace std;
int s1, s2;
string c1, c2;
int main(){
    freopen("travel.in","r", stdin);
    freopen("travel.out","w", stdout);
    cin >> s1 >> c1 >> s2 >> c2;
    if(s1 == s2){
        cout << 1;
    }else{
        cout << "0000";
        return 0;
    }

    if(c1[0] == c2[0] and c1[1] == c2[1]){
        cout << 1;
    }else{
        cout << "000";
        return 0;
    }

    if((c1[2] > 'C' and c2[2] > 'C') or (c1[2] <= 'C' and c2[2] <= 'C')){
        cout << 1;
    }else{
        cout << "00";
        return 0;
    }

    if((c1[2] == c2[2] + 1) or (c1[2] + 1 == c2[2])){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}