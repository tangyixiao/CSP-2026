#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
int flag[N];
long long ans=0;
int n,m;
long long sum;
int r=0;
int o=0;
int lum[1027];
void dfs(int p){
	if(o>m){
		return;
	}
	if(p==n+1){
		if(o<m){
			return;
		}
		for(int i=1;i<=n;i++){
			if(flag[i]){
				if(r==0){
					sum=a[i];
					r=1;
					continue;
				}
				sum&=a[i];
			}
		}
		r=0;
		ans=max(ans,sum);
		return;
	}
	flag[p]=1;
	o++;
	dfs(p+1);
	flag[p]=0;
	o--;
	dfs(p+1);
}
long long t=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t=max(t,a[i]);
	}
	if(n<=20){
		dfs(1);
		cout<<ans;
		return 0;
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(t<4){
		for(int i=1;i<=n;i++){
			lum[a[i]]++;
		}
		if(lum[3]>=m){
			cout<<3;
		}
		else if(lum[3]+lum[2]>=m){
			cout<<2;
		}
		else if(lum[3]+lum[1]>=m){
			cout<<1;
		}
		else{
			cout<<0;
		}
		return 0;
	}
	else if(t<1024){
		for(int i=1;i<=n;i++){
			lum[a[i]]++;
		}
		int sum=0;
		for(int i=n;i>=1;i--){
			sum+=lum[a[i]];
			if(sum>=m){
				cout<<i;
				break;
			}
		}
		return 0;
	}
	if(m==n-1){
		int cnt=1;
		for(int i=1;i<=n;i++){
			t=min(t,a[i]);
		}
		int h;
		if(a[1]==t){
			ans=a[2];
			h=3;
			cnt--;
		}
		else{
			h=2;
			ans=a[1];
		}
		for(int i=h;i<=n;i++){
			if(a[i]==t&&cnt){
				cnt--;
				continue;
			}
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	int k=n;
	int flag=0;
	while(k!=1){
		k/=2;
		if(k%2){
			flag=1;
		}
	}
	if(flag==0){
		if(m<=log2(n)-log2(n/2)){
			--n;
			ans=n;
			n--;
			for(int i=2;i<=m;i++){
				ans&=n;
				n--;
			}
			cout<<ans;
		}
		else{
			cout<<0;
		}
		return 0;
	}
	else{
		map<long long,int> mp;
		for(int i=1;i<=n;i++){
			mp[a[i]]++;
		}
		int sum=0;
		for(long long i=1;i<=n;i=(i+1)*2-1){
			sum+=mp[i];
			if(sum>=m){
				cout<<mp[i];
				return 0;
			}
		}
	}
	return 0;
} 