#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    bool flag = true;
    string s,t,y,z;
    cin >> s >> t >>y >>z;
    if(t == z){
        cout << "0000";
        return 0;
    }
    if(t != z)  cout <<1;
    if(t[1] != z[1]) {
        cout << "000";
        return 0;
    }
    if(t[1] == z[1]) cout <<1;
    if((t[2] == 'A' && z[2] == 'B') || (t[2] == 'B' && z[2] == 'C') || (t[2] == 'D' && z[2] == 'F') || (z[2] == 'A' && t[2] == 'B') || (z[2] == 'B' && t[2] == 'C') || (z[2] == 'D' && t[2] == 'F')){
        cout << 11;
        flag =0;
        return 0;
    }
    if((t[2] == 'A' && z[2] == 'C') || (z[2] == 'A' && t[2] == 'C')){
        cout << 10;
        flag = 0;
    }
    if(flag)    cout<< "00";
    return 0;
}
