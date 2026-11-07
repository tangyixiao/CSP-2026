#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
long long a[N],ans;
char c[N];
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i] >> c[i];
    for(int i=1,j=n;i<=j;){
        if(a[i]>a[j]){
            if(c[i]!=c[j]) ans+=a[j];
            a[i]-=a[j],j--;
        }
        else if(a[i]<a[j]){
            if(c[i]!=c[j]) ans+=a[i];
            a[j]-=a[i],i++;
        }
        else{
            if(c[i]!=c[j]) ans+=a[i];
            i++,j--;
        }
    }
    cout << ans;
    return 0;
}