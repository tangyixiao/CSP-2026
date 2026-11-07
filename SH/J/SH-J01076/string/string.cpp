#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a,b;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		char x;
		cin>>m>>x;
		for(int j=1;j<=m;j++){
			a+=x;
		}
	}
	for(int i=a.size()-1;i>=0;i--){
		b+=a[i]; 
	}
	long long sum=0;
	for(int i=0;i<a.size()/2;i++){
		if(b[i]!=a[i]){
			sum++;
		}
	}
	cout<<sum;
} 
