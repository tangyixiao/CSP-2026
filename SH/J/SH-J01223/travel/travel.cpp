#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string s[5],c[5];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c[1] >> s[1] >> c[2] >> s[2];
    if(c[1]!=c[2]){
        cout << "0000";
        cout << '\n';
        exit(0);
    }else{
        cout << '1';
        if(s[1].substr(0,2)!=s[2].substr(0,2)){
            cout << "000";
            cout << '\n';
            exit(0);
        }else{
            cout << "1";
            bool a=s[1][2]>='A' and s[1][2]<='C';
            bool b=s[2][2]>='A' and s[2][2]<='C';
            if(a!=b){
                cout << "00";
                cout << '\n';
                exit(0);
            }else{
                cout << "1";
                if(abs(int(s[1][2]-s[2][2]))==1){
                    cout << "1";
                }else{
                    cout << "0";
                    cout << '\n';
                    exit(0);
                }
            }
        }
    }
    cout << '\n';
    return 0;
}
//这diff为什么不打endl就报错啊
//这vscode c++扩展怎么是假的啊