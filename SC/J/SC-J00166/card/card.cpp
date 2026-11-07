#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+5),ans(m+5),jmp(m+5);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		jmp[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=jmp[a[i]];j<=n;j=jmp[a[j+1]]){
			ans[a[j]]++;
			if(j==n)break;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}