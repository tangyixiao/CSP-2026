#include<bits/stdc++.h>
using namespace std;
long long a[200005],maxa;
int n,M;
int v[200005];
void dfs(long long now_,int m){
	if(m==0){
		maxa=max(maxa,now_);
		return ;
	}
	if(now_<=maxa)return ;
	for(int i=0;i<n;i++){
		if(v[i]){
			v[i]=0;
			dfs(now_&a[i],m-1);
			v[i]=1;
		}
	}
}
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>M;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(M==n){
		maxa=a[0];
		for(int i=1;i<n;i++){
			maxa&=a[i];
		}
	}else{
		if(M=n-1){
			maxa=0;
			for(int i=0;i<n;i++){
				long long no_=(i==0?a[1]:a[0]);
				for(int j=0;j<n;j++){
					if(i!=j)no_&=a[j];
				}
				maxa=max(maxa,no_);
			}
		}
	else{
	for(int i=0;i<n;i++){
		v[i]=0;
		dfs(a[i],M-1);
		v[i]=1;
	}
	}
	}
	cout<<maxa;
	return 0;
}