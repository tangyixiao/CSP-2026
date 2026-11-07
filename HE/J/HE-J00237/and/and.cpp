#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10,M=pow(2,20)+10;
ll n,a[N],ans=0,m,ma=0,v=pow(2,30)-1,q,n1;
ll b[M];
bool vis[N],f=0,f1=0;
void dfs(ll x,ll y,ll z){
	if(z<ans){
		return ;
	}
	if(y==m){
		if(ans<z){
			ans=z;
		}
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(i,y+1,(z&a[i]));
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
ios::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
	b[a[i]]++;
	if((a[i]&a[i]+1)!=0){
	f=1;	
	}
	if(a[i]!=i-1){
		f1=1;
	}
}
if(m==1){
	for(int i=1;i<=n;i++){
		if(ma<a[i]){
		ma=a[i];
		}
	}
	cout<<ma;return 0;		
}
if(m==n){
	for(int i=1;i<=n;i++){
		v=(v&a[i]);
	}
	cout<<v; return 0;
}
if(m==2){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(ans<(a[i]&a[j])){
				ans=(a[i]&a[j]);
			}
		}
	}
	cout<<ans; return 0;
}
if(m==n-1){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				v=(v&a[i]);
			}
		}
		if(ans<v){
			ans=v;
		}
		v=pow(2,30)-1;
	}
	cout<<v;
	return 0;
}
if(f==0){
for(int i=20;i>=1;i--){
	q=pow(2,i)-1;
	m-=b[q];
	if(m<=0){
		cout<<q;break;
	}
}	
return 0;
}
n1=n;
bool ff=0;
while(n1){
	if(n1%2==1&&n1!=1){
		ff=1;break;
	}
	n1/=2;
}
if(ff==0&&f1==0){
	ll x=1,s=0;
	while(1){
		s++;
		if(m<=x){
			break;
		}
		x+=s;
	}
	ll p=pow(2,s-1),o=0;
	cout<<max(o,n-p);
	return 0;
}
dfs(1,0,v);
cout<<ans;
	return 0;
}
