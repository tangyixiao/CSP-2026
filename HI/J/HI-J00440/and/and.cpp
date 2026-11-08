#include<bits/stdc++.h>
using namespace std;
long long a[1000001],n,m,h;
long long s[1000001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<=10;i++){
		long long g=pow(2,i);
		s[g]=1;
	}	
	long long f=0;
	for(int i=1;i<=n;i++){
		cin>>h;
		if(s[h+1]==1){
			f++;
		}
	
	a[i]=h;
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}else if(f==n){
		cout<<a[n-m+1];
	}
	
	return 0;	
}
