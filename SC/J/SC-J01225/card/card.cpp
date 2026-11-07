#include<bits/stdc++.h>
using namespace std;
long long mx(long long a,long long b){
	if(a>b)return a;
	return b;
}
long long a[500010];
long long last[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=i; 
		for(int j=last[x]+1;last[x]!=0&&j<i;j++){
			a[j]=mx(min(j-a[last[x]],a[j]),0);
		}
		last[x]=i;
	}
	for(int i=1;i<=m;i++){
		cout<<a[last[i]]<<" ";
	}
	return 0;
}
