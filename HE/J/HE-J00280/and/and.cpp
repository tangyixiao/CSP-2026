#include<bits/stdc++.h> 
using namespace std;
int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,c,b=0;
	int a[2005];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0)c=a[0];
		c=c&a[i];
		if(a[i]>b) b=a[i];
	}
	if(m==1)cout<<b;
	if(m==n){
		cout<<c;	
	}
	return 0;
}
