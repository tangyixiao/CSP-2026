#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m;
char a[10005],b[10005];
bool f[5];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n;
	for(int i=1;i<=3;i++)cin>>a[i];
	cin>>m;
	for(int i=1;i<=3;i++)cin>>b[i];
	if(n==m){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(a[2]==b[2]){
		cout<<1;
	} else{
		cout<<0<<0<<0;
		return 0;
	}
	if(a[3]-64<=3&&b[3]-64<=3){
		cout<<1;
	}else if(a[3]-64>3&&b[3]-64>3){
		cout<<1;
	}else{
		cout<<0;
	}
	int a1=a[3]-64,b1=b[3]-64;
	if(abs(a1-b1)==1){
		if(a1==3&&b1==4){
			cout<<0;
			return 0; 
		}
		if(a1==4&&b1==3){
			cout<<0;
			return 0;
		}
		else{
			cout<<1;
			return 0;
		} 
	}else{
		cout<<0;
		return 0;
	}
	return 0;
} 