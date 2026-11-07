#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,k,sum,ans;
int a[200005],b[200005];
string s[200005];
signed main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ans=pow(2,31)-1;
	cin>>n>>m;
	sum=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(k=1;k;k++){
		if(pow(2,k)>a[n]){
			k--;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		s[i]="";
		int g=a[i];
		while(a[i]){
			s[i]+=(a[i]%2+'0');
			a[i]/=2;
		}
		a[i]=g;
		while(s[i].size()<k+1){
			s[i]+='0';
		}
	}
	while(sum>m&&k>=0){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(s[i][k]=='1'&&b[i]==0) cnt++;
		}
		if(cnt>=m){
			for(int i=1;i<=n;i++){
				if(s[i][k]=='0'){
					b[i]=1;
				}
			}
			sum=cnt;
		}
		k--;
	}
	for(int i=1;i<=n;i++){
		if(b[i]==0) ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}