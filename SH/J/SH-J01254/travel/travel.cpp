#include <bits/stdc++.h>
using namespace std;

signed main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    bool f1=(c1==c2);
    bool f2=(s1[1]==s2[1]&&s1[0]==s2[0]);
    bool f3=(s1[2]<='C'?s2[2]<='C':s2[2]>'C');
    bool f4=(s1[2]<='C'?abs(s1[2]-s2[2])==1:abs(s1[2]-s2[2])==2);
    printf("%d%d%d%d",f1,f1&&f2,f1&&f2&&f3,f1&&f2&&f3&&f4);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
