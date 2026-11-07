#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,a[N],sum,p,ans;
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	p=sum/2;
	ll i=0,j=n+1,m1=0,m2=0,x=0,y=0;
	while(i<=j){
		if(!m1){
			i++;
			m1+=min(a[i],p-x);
			x+=min(a[i],p-x);
		}
		if(!m2){
			j--;
			m2+=min(a[j],p-y);
			y+=min(a[j],p-y);
		}
		ll k=min(m1,m2);
		m1-=k,m2-=k;
		if(c[i]!=c[j]){
			ans+=k;
		}
	}
    cout<<ans;
	return 0;
}