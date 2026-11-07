#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+10,M=3e5+10;
ll n,m,a[N],b[N],c[M];
bool f=0;
map<ll,int> mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
ios::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
		c[a[i]]=i;
	if(a[i]<a[i-1]&&i!=1){
		f=1;
	}
}
if(f==0){
	for(int i=1;i<=m;i++){
	cout<<c[i]<<" ";
}
return 0;
}
memset(c,0,sizeof(c));
for(int i=1;i<=n;i++){
	memset(b,0,sizeof(b));
for(int j=i;j<=n;j++){
	b[j]=a[j];
}
	for(int j=i;j<=n;j++){
		if(mp[a[j]]==0){
		mp[a[j]]=j;	
		}else{
	
		for(int j1=mp[a[j]];j1<j;j1++){
			mp[b[j1]]=0;
			b[j1]=0;
		}
		mp[a[j]]=j;	
		}
	}
	for(int i=1;i<=n;i++){
		mp[a[i]]=0;
		if(b[i]!=0){
			c[b[i]]++;
		}
	}
	mp.clear();
}
for(int i=1;i<=m;i++){
	cout<<c[i]<<" ";
}
	return 0;
}
