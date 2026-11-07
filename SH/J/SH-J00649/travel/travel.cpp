#include<bits/stdc++.h>
using namespace std;
string a,a1,b,b1;
string s,s1,s2;
string c,d;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> a >> a1 >> b >> b1;
    s1 += a1[0];
    s1 += a1[1];
    s2 += b1[0];
    s2 += b1[1];
    c = a1[2];
    d = b1[2];
    if(a != b){
        cout << "0000";
        return 0;
    }
    if(s1 != s2){
        cout << "1000";
        return 0;
    }
    if( (c >= "A" && c <= "C"  && d >= "D" && d <= "F") || (c >= "D" && c <= "F" && d >= "A" && d <= "C") ){
        cout << "1100";
        return 0;
    }if(c == "B" || d == "B" || c == "F" || d == "F"){
        cout << "1111";
    }else{
        cout << "1110";
    }

    return 0;
}
