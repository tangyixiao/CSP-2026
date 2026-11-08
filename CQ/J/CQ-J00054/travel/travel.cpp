#include <bits/stdc++.h>
#define int long long
using namespace std;

namespace _ {

    string c1, c2, c3, c4;    

    char a, b;

    signed main() {

        freopen("travel.in","r",stdin);
        freopen("travel.out","w",stdout);

        cin >> c1 >> c2 >> c3 >> c4;

        a = c2.back(); c2.pop_back();
        b = c4.back(); c4.pop_back();

        if (c1 != c3) {

            cout << "0000" << endl;

        } else {

            cout << 1;

            if (c2 != c4) {

                cout << "000" << endl;

            } else {

                cout << 1;

                if ((a <= 'C' && b <= 'C') || (a >= 'D' && b >= 'D')) {

                    cout << 1;

                    if (a > b) swap(a, b);

                    if (a + 1 == b) {

                        cout << 1 << endl;

                    } else {

                        cout << 0 << endl;

                    }

                } else {

                    cout << "00" << endl;

                }

            }

        }

        return 0;
    }

}

signed main() {
    return _::main();
}