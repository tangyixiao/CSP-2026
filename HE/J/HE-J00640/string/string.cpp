#include <bits/stdc++.h>
using namespace std;

stack<char> st;
string stri;
int n, ans;

int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);

    cin >> n;

    for(int i = 1; i<=n; i++){
        int a;
        char b;
        cin >> a >> b;
        for(int i = 1; i<=a; i++) stri = stri+b;
    }

    for(int i = 0; i<(stri.size()+1)/2; i++){
        st.push(stri[i]);
    }

    for(int i = (stri.size()-1)/2; i<stri.size(); i++){
        char sb = st.top();
        if(stri[i] != sb) ans++;
        st.pop();
    }
    cout << ans << endl;


    return 0;
}
