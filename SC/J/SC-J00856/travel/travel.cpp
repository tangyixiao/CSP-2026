#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,c2,s1,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    char k1=s1[2],k2=s2[2];
    if(c1==c2){
        cout << "1";
        if((s1[0]+s1[1])==(s2[0]+s2[1])){
            cout << "1";
            if(k1>'C'&&k2>'C'){
                cout << "11";
            }else if(k1<='C'&&k2<='C'){
                cout << "1";
                if(k1-k2==1||k2-k1==1){
                    cout << "1";
                }else{cout << "0";}
            }else{cout << "00";}
        }else{cout << "000";}
    }else{cout << "0000";}
    fclose(stdin);
    fclose(stdout);
    return 0;
}
