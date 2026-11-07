#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],fa[500010],k[500010];
int op[300010];
long long t[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(op[a[i]]==0){
			op[a[i]]=i;
			fa[i]=i;
		}else{
			fa[i]=op[a[i]];
		}
		k[fa[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(k[i]!=0){
			t[a[i]]+=k[i];
			t[a[fa[i+1]]]+=t[a[i]];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
} 