#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool n1(){
    if (c1 == c2){
        return true;
    }
    return false;
}
bool n2(bool b){
    if (!b){
        return false;
    }
    if (s1[0] != s2[0]){
        return false;
    }
    if (s1[1] != s2[1]){
        return false;
    }
    return true;
}
bool n3(bool b){
    if (!b){
        return false;
    }
    if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C'){
        return true;
    }
    if ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')){
        return true;
    }
    return false;
}
bool n4(bool b){
    if (!b){
        return false;
    }
    if ((s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F')){
        return true;
    }
    if ((s1[2] == 'A' && s2[2] == 'B') || (s2[2] == 'B' && s1[2] == 'A')){
        return true;
    }
    if ((s1[2] == 'B' && s2[2] == 'C') || (s2[2] == 'C' && s1[2] == 'B')){
        return true;
    }
    return false;
}
int main(){
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    bool b1, b2, b3, b4;
    b1 = n1();
    b2 = n2(b1);
    b3 = n3(b2);
    b4 = n4(b3);
    if (b1){
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (b2){
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (b3){
        cout << 1;
    }
    else {
        cout << 0;
    }
    if (b4){
        cout << 1;
    }
    else {
        cout << 0;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
