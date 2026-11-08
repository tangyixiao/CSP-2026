#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],x,y,c=-1,d=1,e;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=x){
			x=a[i];
		}if(a[i]>y && a[i]!=x){
			y=a[i];
		}
	}
	if(m==2){
		x*=2;
		y*=2;
		while(1){
			c++;
			x=x/2;
			y=y/2;
			if(x%2==1 && y%2==1){
				d=1;
				for(int i=1;i<=c;i++){
					d*=2;
				}
				e+=d;
			}
			if(x==1 || y==1){
				break;
			}
		}
		cout<<e;
	}
	if(m==1){
		cout<<x;
	}
	return 0;
} 
