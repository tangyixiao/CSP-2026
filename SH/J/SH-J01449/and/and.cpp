#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
string second(ll x){
	string s="";
	while(x>0){
		if(x%2==1)s+="1";
		else s+="0";
		x/=2;
	}
	string ss="";
	for(int i=0;i<s.size();i++)ss+=s[s.size()-i-1];
	return ss;
}
ll fin(ll a,ll c){
	string s=second(a);
	string b=second(c);
	string ss="";
	for(int i=0;i<min(s.size(),b.size());i++){
		if(s[s.size()-i-1]==b[b.size()-i-1]&&s[s.size()-i-1]=='1')ss+="1";
		else ss+="0";
	}
	ll ans=0;
	for(int i=0;i<ss.size();i++){
		if(ss[i]=='1')ans+=1<<i;
	}
	return ans;
}
int n,m;
ll maxn=0;
void dfs(int i,int cnt,ll sum){
	if(cnt==m){
		maxn=max(maxn,sum);
		return; 
	}
	if(i>=n)return;
	if(cnt==0){
		dfs(i+1,cnt+1,a[i]);
		dfs(i+1,cnt,0);
	}
	dfs(i+1,cnt+1,fin(sum,a[i]));
	dfs(i+1,cnt,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.in","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(0,0,0);
		cout<<maxn;
		return 0;
	}
	else{
		if(m==1){
			maxn=0;
			for(int i=0;i<n;i++)maxn=max(maxn,a[i]);
			cout<<maxn;
			return 0;
		}
		if(m==2){
			maxn=0;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					maxn=max(maxn,fin(a[i],a[j]));
				}
			}
		}
		if(m==n){
			ll sum=a[0];
			for(int i=1;i<n;i++)sum=fin(sum,a[i]);
			cout<<sum;
			return 0;
		}
		else{
			ll minn=1e9;
			for(int i=0;i<n;i++)minn=min(minn,a[i]);
			cout<<minn;
			return 0;
		} 
	}
	return 0;
} 
