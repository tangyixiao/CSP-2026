#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000],x;

int awy(int x,int y){
	int c=0,d=1;
	while(x>0&&y>0){
		int a=x%10,b=y%10;
		if(a==1&&b==1){
			c+=1*d;
		}
		x=x/10;
		y=y/10;
		d*=10;
	}
	return c;
}

int cmp(int a,int b){
	return a>b;
}

int zz(int x){
	int a=0,b=1;
	while(x>0){
		a+=x%2*b;
		x/=2;
		b*=10;
	}
	return a;
}
 

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]=zz(a[i]);
	}
	sort(a,a+n,cmp);
	x=a[0];
	for(int i=0;i<m;i++){
		x=awy(x,a[i]);
	}
	int ans=0,b=1;
	while(x>0){
		int k=x%10;
		ans+=k*b;
		x/=10;
		b*=2;
	}
	cout<<ans;
	return 0;
}
