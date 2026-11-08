#include <bits/stdc++.h>
using namespace std;
string c1 ,s1 ,c2 ,s2;
string s3="", s4="";
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1==c2)cout<<"1";
    else cout<<"0";

    for(int i=0;i<=1;i++){
        s3+=s1[i];
        s4+=s2[i];
    }
    if(c1==c2&&s3==s4)cout<<"1";
    else cout<<"0";

    string s5="", s6="";
    s5+=s1[2];
    s6+=s2[2];
    if(c1==c2&&s3==s4){
        if(s5=="D"&&s6=="F"||s5=="F"&&s6=="D")cout<<"1";
        else if(s5=="A"&&s6=="B"||s6=="C")cout<<"1";
        else if(s5=="B"&&s6=="A"||s6=="B")cout<<"1";
        else if(s5=="C"&&s6=="A"||s6=="B")cout<<"1";
        else cout<<"0";
    }
    else cout<<"0";

    if(c1==c2&&s3==s4){
        if(s5=="D"&&s6=="F"||s5=="F"&&s6=="D")cout<<"1";
        else if(s5=="A"&&s6=="B")cout<<"1";
        else if(s5=="B"&&s6=="A"||s6=="C")cout<<"1";
        else if(s5=="C"&&s6=="B")cout<<"1";
        else cout<<"0";
    }
    else cout<<"0";
    return 0;
}
