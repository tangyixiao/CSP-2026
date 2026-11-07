#include <bits/stdc++.h>
using namespace std;
string s;
string h;
string d;
string j;
string z;
long long w;
int n;
int Q;
int ans;
int l=1;
int ns;
int m;
int y;
int V;
int C;
bool cl(int a,int b){
    s={};
    h={};
    d={};
    j={};
    z={};
    while(a!=0){
        s+=a%2;
        a=a/2;
    }
    for(int i=s.size();i>=1;i--){
        h[i]=s[i];
    }
    while(b!=0){
        d+=a%2;
        b=b/2;
    }
    for(int i=d.size();i>=1;i--){
        j[i]=d[i];
    }
    Q=max(s.size(),d.size());
    if(s.size()>d.size()) y=1;
    V=s.size();
    C=d.size();
    int SS=V-C;
    if(y){

    for(int i=1;i<=V;i++){
        z[i]=h[V--]&&j[C--];
        int YY=C;
        if(YY==0){
            for(int l=1:l<=SS;i++){
                h[i]=0;
            }
        }
    }
    else{
        for(int i=1;i<=Q;i++){
        z[i]=h[i]&&j[I];
    }
    }
    for(int g=Q;g>=1;g--){
            w=w+pow(10,g-1)*z[l]-'0';
            l++;
        }
    return w;
}
int main(){
    //freopen("and.in","r",stdin);
    //freopen("and.out","w",stdout);
    cin>> n;
    cin>>m;
    int a[n];
    for(int I=1;I<=n;I++){
        cin >> a[I];
        ns =max(m,a[I],cl);
        ans=max(ans,ns);
    }
    cout << ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
