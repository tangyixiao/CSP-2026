#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 200005
ll n,a[maxn],ans,flag=0;
string s=" ";
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
        ll x;
        char c;
        cin>>x;
        cin>>c;
        a[i]=x;
        s+=c;
    }
    ll i=1,j=n,d=abs(a[1]-a[n]);
    if (s[1]!=s[n]){
        ans+=min(a[1],a[n]);
    }
    if (a[1]>a[n]) {
        flag=1;
        j--;
    }else if (a[1]<a[n]) {
        i++;
    }else {
        flag=2;
        i++;j--;
    }
    while (i<j){
        if (flag==1){
            ll cnt=abs(d-a[j]);
            if (s[i]!=s[j]) ans+=min(d,a[j]);
            if (d>a[j]){
                d-=a[j];
                j--;
            }else if(d<a[j]){
                d=cnt;
                flag=0;
                i++;
            }else {
                d=0;
                i++;
                j--;
                flag=2;
            }
        }else if (flag==0){
            ll cnt=abs(d-a[i]);
            if (s[i]!=s[j]) ans+=min(d,a[i]);
            if (d>a[i]) {
                d-=a[i];
                i++;
            }else if (d<a[i]){
                d=cnt;
                flag=1;
                j--;
            }else {
                d=0;
                i++;
                j--;
                flag=2;
            }
        }else {
            d=abs(a[i]-a[j]);
            if (s[i]!=s[j]){
                ans+=min(a[i],a[j]);
            }
            if (a[i]>a[j]) {
                flag=1;
                j--;
            }else if (a[i]<a[j]) {
                i++;
                flag=0;
            }else {
                flag=2;
                i++;j--;
            }
        }
    }
    cout<<ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}

