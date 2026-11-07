#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[500005],y,x,Y1,x1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(!x)x=a[i];
		if(a[i]!=x){
			y=a[i];
		    Y1++;
	    }
	    else x1++;
	}
	if(n==m){
		for(ll i=1;i<=m;i++){
			cout<<n<<" ";
		}
		return 0;
	}
	if(m==2){
		ll ans=max(x1,Y1);
		if((ans==x1&&min(x,y)==x)||(ans==Y1&&min(x,y)==y))cout<<n<<" "<<0;
		else if((ans==x1&&min(x,y)!=x)||(ans==Y1&&min(x,y)!=y))cout<<0<<" "<<n;
		return 0;
	}
	for(ll i=1;i<=n;i++){
		cout<<1<<" ";
	}
	
	return 0;
}
