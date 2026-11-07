#include<bits/stdc++.h>
using namespace std;
int c,cc,b = 0,bb = 0;
string s,ss;
int main(){
    freopen("travel.in","r".stdin);
    freopen("travel.out","w",stdout);
    cin >> c >> s >> cc >> ss;
    if(c == cc){
        cout << 1;
        if(s[0] == ss[0] && s[1] == ss[1]){
            cout << 1;
            if(s[2]=='A'||s[2] == 'B'||s[2]=='C'){
                b = 1;
            }
            if(ss[2] == 'A'||ss[2]=='B'||ss[2] == 'C'){
                bb = 1;
            }
            if(b == bb){
                cout << 1;
                if(b = 1){
                    cout << 1;
                }
                else if(s[2] == 'B'||ss[2] == 'B'){
                    cout << 1;
                }
                else{
                    cout << 0;
                }
            }
            else{
                cout << 0 << 0;
            }
        }
        else {
            cout << 0 << 0 << 0;
        }
    }
    else{
        cout << 0 << 0 << 0 << 0;
    }
    return 0;
}
