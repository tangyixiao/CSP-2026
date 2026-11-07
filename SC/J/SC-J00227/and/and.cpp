#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool f(int x){
	bool l=1;
	for(int i=1;i<=x;i++){
		bool r=0;
		int k=1;
		for(int j=1;j<=30;j++){
			k*=2;
			if(a[i]+1 == k )r=1;
		}
		if(r==0)l=0;
	}
	return l;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		
	} 
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
	}
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(i!=j)ans=max(ans,a[i]&a[j]);
		cout<<ans;
	}
	else if(m==n-1){
		int ans;
		
	}
	else if(f(n)){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	return 0;
}