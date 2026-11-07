#include <bits/stdc++.h>
using namespace std;
int n,m;
string a,b,aa,bb;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> a >> b >> aa >> bb;
    if(a == aa){
        cout << "1";
    }
    else{
        cout << "0000";
        return 0;
    }
    if(b[0] == bb[0]&&b[1] == bb[1]){
        cout << "1";
    }
    else{
        cout << "000";
        return 0;
    }
    if((b[2]>= 'A' && b[2] <= 'C' && bb[2]>= 'A' && bb[2] <= 'C')||(b[2]>= 'D' && b[2] <= 'F' && bb[2]>= 'D' && bb[2] <= 'F')){
        cout << "1";
    }
    else{
        cout << "00";
        return 0;
    }
    if(b[2]>= 'A' && b[2] <= 'C' && bb[2]>= 'A' && bb[2] <= 'C'){
        int c = b[2] - bb[2];
        if(c == 2||c == -2){
            cout << "0";
            return 0;
        }
        else{
            cout << "1";
        }
    }
    else{
        cout << "1";
    }
    return 0;
}