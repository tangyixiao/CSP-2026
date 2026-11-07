#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in ","r",stdin);
    freopen("travel.out ","w",stdout);
    string c1,c2,s1,s2,c;
    cin >> c1 >> s1 >>c2 >> s2;

    if(c1 == c2){
        c+="1";
    }else{
        c+="0";
    }
    if(s1[0] ==  s2[0] && s2[1] == s1[1] && c1 == c2){
        c+="1";
    }else{
        c+="0";
    }
    if(s1[0] ==  s2[0] && s2[1] == s1[1] && c1 == c2){
            if(s1[2] >='A' &&s1[2] <= 'C'&&s2[2] >='A' &&s2[2] <= 'C'){
                c+="1";
            }else if((s1[2] =='D' || s1[2] == 'E')&&(s2[2] =='D' &&s2[2] == 'E')){
                c+="1";
            }else{
                c+="0";
            }
    }else{
        c+="0";
    }
    if((abs(s1[2]-s2[2]) == 1)&&(c1 == c2)&&(s1[0] ==  s2[0] && s2[1] == s1[1]) && ((s1[2] =='D' || s1[2] == 'E')&&(s2[2] =='D' &&s2[2] == 'E') || (s1[2] >='A' &&s1[2] <= 'C'&&s2[2] >='A' &&s2[2] <= 'C'))){
        if(s1[2] == 'C'&&s2[2]=='D'){
            c+="0";
        }else if(s2[2] == 'C'&&s1[2]=='D'){
            c+="0";
        }else{
            c+="1";
        }

    }else{
        c+="0";
    }
    cout << c;
    return 0;
}
