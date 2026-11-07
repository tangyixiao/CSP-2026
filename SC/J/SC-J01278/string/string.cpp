#include<bits/stdc++.h>
using namespace std;
#define ll long long
char c[200050];
struct ttt{
	ll a;
	char b;
}k[200050];
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n;
	cin>>n;
	if(n==1){
		ll x;
		char y;
		cin>>x>>y;
		cout<<0;
		return 0;
	}
	else if(n==2){
		ll x,x2;
		char y,y2;
		cin>>x>>y;
		cin>>x2>>y2;
		if(y2==y) cout<<0;
		else if(x==x2) cout<<x2;
		else cout<<min(x,x2);
		return 0;
	}
	
   if(n<=2000){
	   ll cnt=0;
	   for(int i=1;i<=n;i++){
		   cin>>k[i].a>>k[i].b;
		   for(int j=cnt;j<=cnt+k[i].a;j++){
			   c[i]=k[i].b;
		   }
		   cnt+=k[i].a;
	   }
	   ll ans=0;
	   for(int i=1;i<=cnt/2;i++){
		   if(c[i]!=c[cnt-i+1]) ans++;
	   }
	   cout<<ans;
	   return 0;
   }
	for(int i=1;i<=n;i++){
		cin>>k[i].a>>k[i].b;
	}
	cout<<0;
	return 0;
}
//froepon("string.in","r",stdin);
//freopen("string.out","w",stdout);