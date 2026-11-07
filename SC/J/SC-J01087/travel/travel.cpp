#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define scf scanf
#define prf printf
#define fu(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ <= _r_; _zzz_++)
#define fd(_zzz_, _l_, _r_) for(auto _zzz_ = _l_; _zzz_ >= _r_; _zzz_--)

int a[128];

signed main(){

    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;

    a['A'] = 1;
    a['B'] = 1;
    a['C'] = 1;
    a['D'] = 2;
    a['F'] = 2;

    if(c1 != c2){
        cout << "0000";
    }
    else{
        cout << '1';
        if(s1[0] != s2[0] || s1[1] != s2[1]){
            cout << "000";
        }
        else{
            cout << '1';
            if(a[s1[2]] != a[s2[2]]){
                cout << "00";
            }
            else{
                cout << '1';
                if((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A')){
                    cout << '0';
                }
                else{
                    cout << '1';
                }
            }
        }
    }

    return 0;
}