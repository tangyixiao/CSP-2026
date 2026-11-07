#include <bits/stdc++.h>
using namespace std;
long long h[1000000],n,m;
int ey(int a,int b){
	int c,d,e;
	while(a&&b){
		c+=a%2;
		a/=2;
		d+=b%2;
		b/=2;
		e+=(c==b);
		e*=10;
	}
	return e;
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	if(m==1){
		sort(h,h+n);
		cout<<h[n-1];
	}else{
		sort(h,h+n);
		for(int i=m-1;i>=0;i++){
			cout<<h[i]; 
		}
	}
	return 0; 
}