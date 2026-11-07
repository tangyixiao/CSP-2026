#include <bits/stdc++.h>
using namespace std;

string s2,s4;
int c1,c2,s1,s3;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> s2;
    cin >> c2 >> s3 >> s4;
    if(c1!=c2){
        cout << "0000";
    }
    else{
            cout << "1";
            if(s1!=s3){
                cout << "000";
            }
            else{
                cout << "1";
                if(s2>="A"&&s2<="C"&&s4>="A"&&s4<="C"){
                    cout << "1";
                    if((s2=="A"&&s4=="B")||(s2=="B"&&s4=="C")){
                        cout << "1";
                    }
                    else{
                        cout << "0";
                    }
                }
                else if(s2>="D"&&s2<="F"&&s4>="D"&&s4<="F"){
                    cout << "11";
                }
                else{
                    cout << "00";
                }
            }
    }
    return 0;
}
