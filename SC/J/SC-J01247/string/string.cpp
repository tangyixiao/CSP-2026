#include<bits/stdc++.h>
using namespace std;
long long k,sum;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	char b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(long long j=1;j<=a;j++)
		    c[++k]=b; 
	}
	for(long long i=1;i<=k/2;i++)
	{
		if(c[i]!=c[k-i+1])
		    sum++;
	}        
	cout<<sum;
	return 0;
}