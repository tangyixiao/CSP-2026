#include<bits/stdc++.h>
using namespace std;
long long n,b,and,c=1,e;
char a;
string s,d;
int main(){
    freopen("travel.in,"r",stdin);
    freopen("travel.out,"w",stdout);
    cin >> n;
    for(int i=0;i<n;i++){
        cin <<b<<a;
        for(j=1;j<=b;j++){
            s[j+and] = a;
        }
        and = b;
    }
    fot(i = size.s ;i>=1;i--){
        s[i] = d[c];
        c++;
    }
    for(i = 1;i<size.s;i++){
        if(s[i]!=d[i]){
            e++;
        }
    }
     cout<<e;
return 0
}

