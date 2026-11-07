#include<bits/stdc++.h>
using namespace std;
int a[200010],n;
char b[200010];
int s[200010];
long long sum,r;
long long dfs(int l,int r,int sl,int sr){
	if(r==l){
		return 0;
	}else if(r-1==l){
		int a1=s[l]-sl+1;
		int a2=sr-s[r-1];
		if(a1==a2){
			if(b[l]==b[r]){
				return 0;
			}else{
				return a1;
			}
		}else if(a1>a2){
			if(b[l]==b[r]){
				return dfs(l,r-1,sl+a2,s[r-1]);
			}else{
				return a2+dfs(l,r-1,sl+a2,s[r-1]);
			}
		}else{
			if(b[l]==b[r]){
				return dfs(l+1,r,s[l]+1,sr-a1);
			}else{
				return a1+dfs(l+1,r,s[l]+1,sr-a1);
			}
		}
	}else{
		int a1=s[l]-sl+1;
		int a2=sr-s[r-1];
		if(a1==a2){
			if(b[l]==b[r]){
				return dfs(l+1,r-1,s[l]+1,s[r-1]);
			}else{
				return a1+dfs(l+1,r-1,s[l]+1,s[r-1]);
			}
		}else if(a1>a2){
			if(b[l]==b[r]){
				return dfs(l,r-1,sl+a2,s[r-1]);
			}else{
				return a2+dfs(l,r-1,sl+a2,s[r-1]);
			}
		}else{
			if(b[l]==b[r]){
				return dfs(l+1,r,s[l]+1,sr-a1);
			}else{
				return a1+dfs(l+1,r,s[l]+1,sr-a1);
			}
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s[i]=s[i-1]+a[i];
		r+=a[i];
	}
	cout<<dfs(1,n,1,r);
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b


*/