#include <bits/stdc++.h>
using namespace std;

bool cmppai(const string& a,const string& b){
    if(a[0]==b[0]&&a[1]==b[1]) return 1;
    else return 0;
}

bool cmpc(const string& a,const string&b){
    if(a[2]=='D'||a[2]=='F') return b[2]=='D'||b[2]=='F';
    else return b[2]=='A'||b[2]=='B'||b[2]=='C';
}

bool cmpx(const string& a,const string&b){
    if(a[2]=='D'||a[2]=='F') return b[2]=='D'||b[2]=='F';
    else return ((a[2]=='A'&&b[2]=='B')||(a[2]=='B'&&b[2]=='A')||(a[2]=='B'&&b[2]=='C')||(a[2]=='C'&&b[2]=='B'));
}

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,c2,c3,c4;
    cin >> c1 >> c2 >> c3 >> c4;
    if(c1!=c3){
        cout << "0000";
        return 0;
    }else{
        if(!cmppai(c2,c4)){
            cout << "1000";
            return 0;
        }else{
            if(!cmpc(c2,c4)){
                cout << "1100";
                return 0;
            }else{
                if(!cmpx(c2,c4)){
                    cout << "1110";
                    return 0;
                }else{
                    cout << "1111";
                    return 0;
                }
            }
        }
    }
    return 0;
}
