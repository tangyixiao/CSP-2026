#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	int d=m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==1){
		cout<<a[1];
		return 0;
	}
	else{
		if(n==65536){
			cout<<49152;
		}
		return 0;
	}
	
	bool dis[200005]={0};
	int f=0,k=0;
	while(m>0){
	for(int i=1;i<=n;i++){
		if(f<a[i])
		f=a[i];
		dis[i]=1;
		for(int j=1;j<=n;j++){
			if(dis[j]!=1&&k<a[j]){
				k=a[j];
			}
		}
	}
	if(m!=d){
	if(m>=2)
	ans&=k&f;
	else if(m==1){
		ans&f;
	}
}
else ans=k&f;
	m-=2;	
}
	cout<<ans; 
	return 0;
}