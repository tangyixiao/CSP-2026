#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans,ma;
bool flag=1,flag2=1,flag3;
inline bool cmp(int a,int b){
	return a>b;
}
inline string ejz(int n){
	string s;
	while(n){
		s+=(n%2)+'0';
		n/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}
inline ll ksm(int a,int b){
	ll ans;
	while(b){
		if(b&1) ans=ans*1ll*a;
		a=a*a*1ll;
		b>>=1;
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		flag=1;
		for(int j=1;j<=30;++j){
			if(a[i]==ksm(2,j)-1){
				flag=0;
				break;
			}
		}
		if(flag) flag2=0;
	}
	if(m==1){
		for(int i=1;i<=n;++i){
			ma=max(ma,a[i]);
		}
		cout<<ma;
		return 0;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;++i){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				ma=max(ma,j&i);
			}
		}
		cout<<ma;
		return 0;
	}else if(flag2){
		sort(a+1,a+n+1,cmp);
		ans=a[1];
		for(int i=2;i<=m;++i){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}else{
		sort(a+1,a+n+1,cmp);
		ans=a[1];
		for(int i=2;i<=m;++i){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
