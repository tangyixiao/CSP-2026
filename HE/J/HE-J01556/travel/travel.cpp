#include <bits/stdc++.h>
using namespace std;
string s;
int k;
int c[5];
string ans;
string d;
bool cmp(char a){
    if(a=='A') return A;
    if(a=='B') return B;
    if(a=='c') return C;
    if(a=='D') return D;
    if(a=='F') return F;
int main(){
   //freopen("travel.in","r",stdin);
    //freopen("travel.out","w",stdout);
    for(int i=1;i<=2;i++){
        cin >> c[i];
        cin >> s[i];
    }
    if(c[1]==c[2]){
        ans+='1';
    }
    else{
        ans+='0';
    }
    for(int i=1;i<=;i++){
        if(s[i]>='0'&&s[i]<='9'){
            s[++k]=s[i];
            if(s[k]==s[i+1])ans+='1';
            else ans+='0';
        }

    }
    int b=4-ans.size();
    cout << ans;
    for(int i=1;i<=b;i++){
        cout << '0';
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
