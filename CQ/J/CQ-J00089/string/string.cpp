#include<iostream>
#include<algorithm>
using namespace std;

long long cnt;
char c[1000000009],x;
int n,a;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long m=0;
	for(int i=1;i<=n;i++){
		cin>>a>>x;
		for(int j=1;j<=a;j++)
		c[m+j]=x;
		m+=a;}
		
	for(int i=1,j=m;i<=(m+1)/2;i++,j--){
		if(c[i]!=c[j])
		cnt++;}
	cout<<cnt;
	
	return 0;}
