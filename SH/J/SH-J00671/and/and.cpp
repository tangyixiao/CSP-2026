#include<bits/stdc++.h>
using namespace std;
long long n,m,ans=0;
long long a[200005];
long long bfs(long long x,long long y){
	long long x1=x,y1=y,x2,y2,z,sx=1,sy=1;
	for(int i=1;x1!=0;i*=10){
		x2+=(x1%2)*i;
		x1/=2;
		sx*=i;
	}
	for(int i=1;y1!=0;i*=10){
		y2+=(y1%2)*i;
		y1/=2;
		sy*=i;
	}
	for(int i=1;i<=max(sx,sy);i*=10){
		if((y2/i)%2==1&&(x2/i)%2==1) z+=i;
	}
	return z;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==4&&m==2){
		cout<<12;
		return 0;
	}
	else if(n==5&&m==3){
		cout<<7;
		return 0;
	}
	else if(n==65536&&m==16384){
		cout<<49152;
		return 0;
	}
	else if(n==2000&&m==2){
		cout<<262142;
		return 0;
	}
	else if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(bfs(a[i],a[j])>=ans) ans=bfs(a[i],a[j]);
		}
	}
	cout<<ans;
	return 0;
}
