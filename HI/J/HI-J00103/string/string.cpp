#include <bits/stdc++.h>
using namespace std;
long long n,m=0,o;
long long num=10000;
long long a[500000];
char c[260000];
long long b[26];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int sum=0;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	} 	
	for(long long i=1;i<=n;i++){
		if(a[i]<=num)
		num=a[i];
		if(c[i]==c[i+1])
		sum++;
	}
	if(sum==n-1){
		cout<<0;
		return 0;
	}
	if(n==1||n==2){
		cout<<num;
		return 0;
	}
	for(long long i=1;i<=n;i++){
		char p=c[i];
		o=p;
		o=o-96;
		b[o]=b[o]+a[i];
	}
	sort(b+1,b+26+1);
	if(b[26]<=m/2){
		cout<<b[26];
	}else if(b[26]>=m/2){
		cout<<m-b[26];
	}
	return 0;
} 
