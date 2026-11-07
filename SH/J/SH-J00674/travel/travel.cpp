#include <iostream>
#include <string>
using namespace std;

signed main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string rc, rs, xc, xs;
    cin >> rc >> rs >> xc >> xs;

    if(rc == xc) {
        cout << "1";

        if(rs.substr(0,2) == xs.substr(0,2)) {
            cout << "1";

            if(rs[2] == 'D' or rs[2] == 'F'){
                if(xs[2] == 'D' or xs[2] == 'F'){
                    cout << "11";
                }
                else cout << "00";
            }
            if(rs[2] == 'A' or rs[2] == 'B' or rs[2] == 'C'){
                if(xs[2] == 'A' or xs[2] == 'B' or xs[2] == 'C'){
                    cout << "1";
                    if(xs[2]-rs[2] == 1 or xs[2]-rs[2] == -1){
                        cout << "1";
                    }
                    else cout << "0";
                }
                else cout << "00";
            }
        }
        else cout << "000";
    }
    else cout << "0000";

    return 0;
}