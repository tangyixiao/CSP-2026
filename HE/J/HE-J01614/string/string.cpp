#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	ll sm=0,s=0;
	int k=0;
	for(int i=1;i<=n;i++)sm+=a[i];
	for(int i=1;i<=n;i++){
		s+=a[i];
		if(s>=(sm+1)/2){
			if(sm&1)a[i]--,sm--,s--;
			break;
		}
	}
	s=0;
	for(int i=1;i<=n;i++){
		s+=a[i];
		if(s>=sm/2){
			if(s!=sm/2){
				for(int j=n;j>i;j--)a[j+1]=a[j],c[j+1]=c[j];
				c[i+1]=c[i],a[i+1]=s-sm/2,a[i]-=a[i+1];
				n++;
			}
			break;
		}
	}
	s=0;
	for(int i=1;i<=n;i++){
		s+=a[i];
		if(s>=(sm+1)/2){
			k=i;
			break;
		}
	}
//	for(int i=1;i<=n;i++){cout<<a[i]<<" "<<c[i]<<"\n";
//		for(int j=1;j<=a[i];j++)cout<<c[i];
//	}
	ll ans=0,x=n,t=0;
	for(int i=1;i<=k;i++){
		ll h=a[i];
		while(x>=k+1){
//			cout<<i<<":"<<h<<" "<<x<<":"<<a[x]-t<<"\n";
			if(h<a[x]-t){
				ans+=h*(c[x]!=c[i]),t+=h;
				break;
			}
			if(h==a[x]-t){
				ans+=h*(c[x]!=c[i]),x--,t=0;
				break;
			}
			ans+=(a[x]-t)*(c[x]!=c[i]),h-=(a[x]-t),x--,t=0;
		}
	}
	cout<<ans;
	/*
	string ss,tt;
	for(int i=1;i<=n;i++){
		if(i<=k){
		for(int j=1;j<=a[i];j++)ss+=c[i];
		}else{
		for(int j=1;j<=a[i];j++)tt+=c[i];
		}
	}
	reverse(tt.begin(),tt.end());
	ans=0;
	for(int i=0;i<ss.size();i++)ans+=(ss[i]!=tt[i]);
//	int kkk=ss.size();
//	ss=' '+ss;
//	int kk=kkk/2;
//	cout<<"\n"<<kk<<" "<<k<<"\n";
//	ans=0;
//	for(int i=1;i<=kk;i++)ans+=(ss[i]!=ss[kkk-i+1]);
	
	cout<<"\n"<<ans;
	*/
	return 0;
}
/*
3
3 a
4 b
1 c

3
2 a
2 b
1 c
*/
