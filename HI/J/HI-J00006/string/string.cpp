#include <bits/stdc++.h>
using namespace std; 
int xx;
int num[200001];
long long h,t,cnt;
char a[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>xx;
	for (int i=1;i<=xx;i++){
		cin>>num[i]>>a[i];
		t+=num[i];
	}
	h=1;
	long long m=0,n=0,p1=0,p2=xx+1;
	while (h<=t){
		if (m==0)m=num[++p1];
		if (n==0)n=num[--p2];
		h+=min(m,n)+1;
		t=t-(min(m,n));
		if (a[p1]!=a[p2]){
			cnt+=min(m,n);
		}
		if (m<n){
			n-=m;
			m=0;
		}
		else{
			m-=n;
			n=0;
		}
	}
	cout<<cnt;
	return 0;
} 
