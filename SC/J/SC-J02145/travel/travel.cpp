#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,c2;
    char a,aa,A,b,bb,B;
    cin >> c1>> a>> aa>> A>> c2>> b>> bb>> B;
    a -= '0';
    aa -= '0';
    b -= '0';
    bb -= '0';
    a = 10 * a + aa;
    b = 10 * b + bb;
    if(c1 == c2){
        if(a == b){
            if((A <= 'C' && B <= 'C') || (A > 'C' &&  B > 'C')){
                if((A == 'A' && B == 'B') || (A == 'B' && B == 'A') || (A == 'C' && B == 'B') || (A == 'B' && B == 'C') || (A == 'D' && B == 'E') || (A == 'E' && B == 'D')) cout << "1111";
                else cout << "1110";
            }else cout << "1100";
        }else cout << "1000";
    }else cout << "0000";
    return 0;
}
