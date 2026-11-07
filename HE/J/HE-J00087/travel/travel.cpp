#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
map<char,int>mp;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    mp['A'] = 1;
    mp['B'] = 1;
    mp['C'] = 1;
    mp['D'] = 0;
    mp['F'] = 0;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == c2)cout << 1;
    else{
        cout << "0000" << endl;
        return 0;
    }
    string t1 = s1.substr(0,2);
    string t2 = s2.substr(0,2);
    if(t1 == t2)cout << 1;
    else{
        cout << "000" << endl;
        return 0;
    }
    if(mp[s1[2]] == mp[s2[2]])cout << 1;
    else{
        cout << "00" << endl;
        return 0;
    }
    if(s1[2] == s2[2] - 1 || s1[2] == s2[2] + 1)cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
