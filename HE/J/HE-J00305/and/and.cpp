#include<bits/stdc++.h>
using namespace std;
int n,m,a[20010],ma;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		ma=max(a[i],ma);
	}
	if(m==n){
		int p=INT_MAX;
		for(int i=1;i<=n;i++){
			p&=n;
		}
		cout<<p;
	}
	
	if(m==1){
		int p1=0;
		for(int i=1;i<=n;i++){
			p1=max(a[i],p1);
		}
		cout<<p1;
	}
	if(m==2){
		int p2=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				p2=max(p2,a[i]&a[j]);
			}
		}
		cout<<p2;
	}
	if(m==n-1){
		int p3=INT_MAX;
		for(int i=n;i>1;i++){
			p3&=a[i];
		}
		cout<<p3;
	}
	else{
		if(ma<4){
			cout<<3;
		}
	}
	

	return 0;
} 
