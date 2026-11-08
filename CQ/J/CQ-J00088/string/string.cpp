#include<bits/stdc++.h>
using namespace std;
int a,n;
long long r,m,v;
char b,sum[2000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=1;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			sum[r]=b;
			r++;
		}
	}
	r--;
	m=r;
	v=r;
	for(int i=1;i<=v;i++){
		if(i==v){
			m-=1;
			break;
		}
		if(sum[i]==sum[v]){
			m-=2;
		}
		v--;
	}
	m/=2;
	cout<<m<<endl;
	return 0; 
} 
