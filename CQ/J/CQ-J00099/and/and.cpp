#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int ans,l,cnt,n,m,a[200005],sum[35];
string s[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt=0;
		for(int j=0;j<30;j++){
			s[i]+='0';
		}
		while(a[i]){
			cnt++;
			sum[cnt]+=a[i]%2;
			s[i][30-cnt]=(a[i]%2+'0');
			a[i]/=2;
		}
	}
	sort(s+1,s+1+n);
	l=1;
	for(int i=30;i>=1;i--){
		if(sum[i]>=m){
			for(;l<=n;l++){
				if(s[l][30-i]=='0'){
					for(int j=1;j<=30;j++){
						sum[j]-=(s[l][30-j]-'0');
					}
				}
				else{
					break;
				}
			}
			ans+=pow(2,i-1);
		}
	}
	cout<<ans;
	return 0;
}
/*
一万年没训J拉成啥了 
*/
