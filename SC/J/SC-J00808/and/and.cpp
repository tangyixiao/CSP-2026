#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=5e5+10;
ll n,m,v[maxn],dp[maxn],mx;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ll mx2=0;
	for(int i=1;i<=n;i++){
		cin>>v[i];
		mx2=max(mx2,v[i]);
	}
	if(m==1){
		cout<<mx2;
		return 0;
	}else if(m==2){
		ll i=1,j=1;
		mx=0;
		while(i<=n&&j<=n){
			if(i==j){
				j++;
				continue;
			}
			mx=max(v[i]&v[j],mx);
			j++;
			if(j==n-1){
				i++;
				j=i;
			}
		}
		cout<<mx;
		return 0;
	}else if(m==n){
		ll ans=v[1]&v[2];
		for(int i=3;i<=n;i++){
			ans=ans&v[i];
		}
		cout<<ans;
		return 0;
	}else{
		ll cnt1=0,cnt2=0,cnt3=0;
		if(mx2<4){
			for(int i=1;i<=n;i++){
				if(v[i]==3){
					cnt3++;
				}else if(v[i]==2){
					cnt2++;
				}else if(v[i]==1){
					cnt1++;
				}
			}
		}
		if((cnt2+cnt3)>=m&&cnt2>=1&&cnt3>=1){
			cout<<2;
			return 0;
		}else{
			if((cnt1+cnt3)>=m&&cnt1>=1&&cnt3>=1){
				cout<<1;
			}else{
				cout<<0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
//特殊样例15-25