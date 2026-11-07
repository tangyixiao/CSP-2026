#include <bits/stdc++.h>
using namespace std;
#define ll long long
string a1,a2,b1,b2;
ll ans[5];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>a1>>a2>>b1>>b2;
    if (a1==b1){
        ans[1]=1;
        ll A1=(a2[0]-'0')*10+(a2[1]-'0'),
           B1=(b2[0]-'0')*10+(b2[1]-'0');
        if (A1==B1) {
            ans[2]=1;
            if (('A'<=a2[2] && 'C'>=a2[2] && 'A'<=b2[2] && 'C'>=b2[2]) ||
                 ('D'<=a2[2] && 'E'>=a2[2] && 'D'<=b2[2] && 'E'>=b2[2])){
                    ans[3]=1;
                    if (abs((a2[2]-'A')-(b2[2]-'A'))==1) ans[4]=1;
                 }
        }
    }
    for (int i=1;i<=4;i++)cout<<ans[i];
    fclose(stdin);
    fclose(stdout);
    return 0;
}

