#include<bits/stdc++.h>
using namespace std;
const long long MAX1=2*1e5+5;
char c[MAX1];
long long a[MAX1]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long x;
		char ch;
		cin>>x>>ch;
		
		a[i]=x;
		c[i]=ch;
	}
	long long num=0;
	int l=1,r=t;
	long long x=0;
	int f;
	int z=a[l],y=a[r];
	while(l<=r){
		x=min(z,y);
		if(c[l]!=c[r]){
			num+=x;
		}
		z-=x;
		y-=x;
		if(z==0){
			l++;
			z=a[l];
		}else if(y==0){
			r--;
			y=a[r];
		}else{
			l++;
			r--;
			z=a[l];
			y=a[r];
		}
	}
	cout<<num;
	return 0;
}