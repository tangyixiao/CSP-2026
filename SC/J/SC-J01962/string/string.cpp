#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2e5+5;
int n;
ll a[N];
char c[N];
string s;
ll sum;
ll ans;

void dfs(int i){
	if(i>n/2+1){
		sum=max(sum,ans);
		return ;
	}
	if(s[i]!=s[n+1-i]){
		ans++;
		dfs(i+1);
	}
	if(s[i]==s[n+1-i]){
		dfs(i+1);
	}
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		for(ll j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	dfs(0);
	cout<<sum;
	
	return 0;
}