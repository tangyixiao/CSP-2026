#include<bits/stdc++.h>
using namespace std;
const int N=5e5+7;
long long a[N],s[N],pre[N];
//n^2复杂的，预计得分 90 
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	long long m;
	cin>>n>>m;
	bool flag=0;
	long long maxn=LLONG_MIN;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		if(a[i]!=i) flag=1;
	}
	if(maxn<=100&&n>5000){
		map<long long,int> mp;
		vector<long long> aa(n+1),ss(n+1),ppre(n+1);
		aa[0]=0;
		for(int i=1;i<=n;i++){
			if(mp[a[i]]==0){
				mp[a[i]]++;
				aa.push_back(a[i]);
			}else mp[a[i]]++;
		}
		sort(aa.begin(),aa.end());
		for(int i=1;i<aa.size();i++){
			ss[i]=aa[i+1]-aa[i];
		}
		for(int i=1;i<aa.size();i++){
			ppre[i]=ppre[i-1]+ss[i];
		}
		long long ans=1;
		for(int i=1;i<=aa.size();i++){
			long long have=mp[aa[i]];
			long long need=0;
			for(int j=i-1;j>=1;j--){
				need+=(ppre[i-1]-ppre[j-1]);
				if(need>m){
					break;
				}
				have++;
			}
			ans=max(ans,have);
		}
		return 0;
	}
	if(flag==0){
		long long can=0;
		int ans=1;
		for(int i=1;i<=n;i++){
			can+=i;
			if(can<=m) ans++;
			else break;
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++){
		s[i]=a[i+1]-a[i];
	}
	flag=0;
	for(int i=1;i<n-1;i++){
		if(s[i]!=s[i+1]){
			flag=1;
		}
	}
	if(flag==0){
		int cheng=1;
		int ans=1;
		long long can=0;
		for(int i=1;i<=n;i++){
			can+=cheng*s[1];
			cheng++;
			if(can<=m){
				ans++;
			}else{
				break;
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<n;i++){
		pre[i]=pre[i-1]+s[i];
	}
	int ans=1;
	for(int i=1;i<=n;i++){
		int have=1;
		long long need=0;
		for(int j=i-1;j>=1;j--){
			need+=(pre[i-1]-pre[j-1]);
			if(need>m){
				break;
			}
			have++;
		}
		ans=max(ans,have);
	}
	cout<<ans;
	return 0;
}
/*
5 5
1 2 4 8 9
5 8
-3 -1 2 2 7
*/
