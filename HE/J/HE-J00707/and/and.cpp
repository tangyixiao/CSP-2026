#include<bits/stdc++.h>
using namespace std;
long long n,m,z1,a[200005],mm;
int js(int x,int y,long long z){
	if(x==1){
		z=a[y];
	}
	z&=a[y];
	if(x==m){
		mm=max(mm,z);
	}
	for(int i=1;i<=n-y;i++){
		js(x+1,y+i,z);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		long long z=a[1];
		for(int i=1;i<=n;i++){
			z&=a[i];
		}
		cout<<z;
	}
	else if(m==1){
		long long ma=-1;
		for(int i=1;i<=n;i++){
			ma=max(ma,a[i]);
		}
		cout<<ma;
	}
	else if(m==n-1){
		long long z,ma=-1;
		for(int i=1;i<=n;i++){
			if(i==1)z=a[2];
			else z=a[1];
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				z&=a[j];
			}
			ma=max(ma,z);
		}
		cout<<ma;
	}
	else if(m==2){
		long long z=0,ma=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				z=a[i]&a[j];
			}
			ma=max(ma,z);
		}
		cout<<ma;
	}
	else{
		for(int i=1;i<=n-1;i++){
			js(1,i,0);
		}
		cout<<mm;
	} 
	return 0;
}
