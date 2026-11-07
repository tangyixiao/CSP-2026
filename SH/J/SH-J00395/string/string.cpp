#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b[100009];
	long long x=0;
	long long ans=0;
	char c[100009];
	string d;
	cin>>a;
	for(int i=0;i<a;i++)
		cin>>b[i]>>c[i];
	for(int i=0;i<a;i++){
		x+=b[i];
	}
	for(int i=0;i<a;i++)
		for(int j=0;j<b[i];j++)
			d+=c[i];
	int e=x/2;
	for(int i=0;i<e;i++)
		if(d[i]!=d[x-i-1])
			ans++;
	cout<<ans;
	return 0;
}
