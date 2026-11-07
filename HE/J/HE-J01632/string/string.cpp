#include<bits/stdc++.h>
using namespace std;
int n,a,x=0,m;
string c,d,b; 
int main()
{
//	freopen("string.in","i",stdin);
//	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a>>b;
		for(long long j=0;j<a;j++){
			c+=b;
		}
	}
	for(long long i=c.size()-1;i>=1;i--){
		d[x]=c[i];
		x++;
	}
	for(long long i=0;i<c.size()/2;i++){
		if(c[i]!=d[i]){
		   m++;	
		}
	}
	cout<<m;
	return 0;
}

