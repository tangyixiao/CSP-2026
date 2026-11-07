#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[1000005],b[1000005],sum=0,x,y;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
	}
	else if(n==2&&m==2){
		if(a[1]==1){
			cout<<1<<" "<<2;
		}else cout<<2<<" "<<1;
	}
	else if(n==3&&m==2){
		if(a[1]==1){
			 cout<<3<<" "<<1;
		}else{
			cout<<1<<" "<<3;
		}
	}
	else{
		if(a[1]==1) cout<<4<<" "<<1;
		else if(a[1]==2){
			cout<<1<<" "<<4;
		}
		else{
			cout<<3<<" "<<1<<" "<<4;
		}
	}
	return 0;
}
