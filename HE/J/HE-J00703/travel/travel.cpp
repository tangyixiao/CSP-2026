#include <bits/stdc++.h>
using namespace std;
int r,x;
string c,b;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> r >> c >> x >> b;
    if(r = x){
        cout << "1";
        if (c[1] == b[1] && c[2] == b[2]){
            cout <<"1";
            if(((c[3] == "A"|| c[3] == "B") || c[3] == "C")&&((b[3] == "A"|| b[3] == "B") ||b[3] == "C") || ((c[3] == "D" || c[3] == "F" ) && (b[3] == "D" || b[3] == "F"))){
                cout << "1";
                    if(((c[3] == "A" && b[3] = "B")||(c[3] == "B" && b[3] = "A"))||((c[3] == "B" && b[3] = "C")||(c[3] == "C" && b[3] = "B")) || ((c[3] == "D" && b[3] = "F")||(c[3] == "F" && b[3] = "D"))){
                        cout << "1";
                    }else{
                        cout << "0";
                    }
                }else{
                    cout << "00";
                }
        }else{
            cout << "000";
        }
    }else{
        cout << "0000";
    }
    return 0;
}
