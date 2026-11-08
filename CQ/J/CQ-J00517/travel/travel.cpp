#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
    ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1==c2){
        cout << 1;
        string t1="",t2="";
        t1+=s1[0];t1+=s1[1];
        t2+=s2[0];t2+=s2[1];
        if(t1==t2){
            cout << 1;
            if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&
            (s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))){
                cout << 1;
                if((s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B')
                ||(s1[2]=='B'&&s2[2]=='C')||
                (s1[2]=='C'&&s2[2]=='B')||
                (s1[2]=='D'&&s2[2]=='F')||
                (s1[2]=='F'&&s2[2]=='D')){
                    cout << 1 << "\n";
                }
                else cout << 0 << "\n";
            }
            else cout << 0 << 0 << "\n";
        }else{
            cout << 0 << 0 << 0 << "\n";
        }   
    }else{
        cout << 0 << 0 << 0 << 0 << "\n";
    }
    return 0;
}