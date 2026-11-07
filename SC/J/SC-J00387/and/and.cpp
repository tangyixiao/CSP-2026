#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool used[200005];
long long t[50];
long long ans;
long long dans;
long long an(int x,int y){
	string s="";
	while(1){
		if(x%2==1&&y%2==1){
			s=s+"1";
		}
		else{
			s=s+"0";
		}
		x/=2;
		y/=2;
		if(x==0||y==0){
			break;
		}
	}
	long long ans=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1'){
			ans+=t[i];
		}
	}
	return ans;
}
void dfs(int step){
	if(step==m){
		ans=max(ans,dans);
		return;
	}
	else{
		for(int i=1;i<=n;i++){
			if(used[i]==0){
				used[i]=1;
				int tans=dans;
				if(dans==0){
					dans=a[i];
				}
				else{
					dans=an(dans,a[i]);
				}
				dfs(step+1);
				dans=tans;
				used[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	t[0]=1;
	for(int i=1;i<=30;i++){
		t[i]=t[i-1]*2;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,an(a[i],a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=an(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	dfs(0);
	cout<<ans;
	return 0;
}