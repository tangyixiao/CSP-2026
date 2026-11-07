#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; ++i){
        int a;
        char x;
        cin >> a >> x;
        //s.append have an size limit? try append using loop
        //loop seems to be more slower
        s.append(a, x);
        /*for (int j = 0; j < a; ++j){
            s += x;
        }*/
    }
    long long count = 0;
    if (s.size() % 2 == 0){
        for (int i = 0, j = s.size() - 1; i + 1 != j; ++i, --j){
            if (s[i] != s[j]){
                count++;
            }
        }
    }
    else if (s.size() % 2 == 1){
        for (int i = 0, j = s.size() - 1; i != j; ++i, --j){
            if (s[i] != s[j]){
                count++;
            }
        }
    }
    cout << count;
    //cout << s;
    return 0;
}
