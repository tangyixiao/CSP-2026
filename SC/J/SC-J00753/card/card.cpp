#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[500005],b[500005],cnt,c[500005],w[500005],e[500005];
bool o[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
	e[a[i]]++;
}
for(int i=0;i<n;i++){
	cnt=0;
	memset(o,0,sizeof(o));
	for(int j=1;j<=n-i;j++){
		b[++cnt]=a[j-i];
	}
	for(int j=1;j<=cnt;j++){
		if(o[b[j]]){
			w[b[j]]++;
		}else{
			o[b[j]]=1;
		}
		
	}
}
for(int i=1;i<=n;i++){
	e[a[i]]-=w[i];
}
for(int i=1;i<=m;i++){
	cout<<e[a[i]]<<" ";
}

	return 0;
}
