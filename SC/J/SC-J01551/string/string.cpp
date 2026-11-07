#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string x;
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(int j=1;j<=a;j++)
			x+=b;
	}
	long long l=x.length();
	long long sum=0;
	for(int i=0;i<=(l-1)/2;i++)
		if(x[i]!=x[l-i-1])
			sum++;
	cout<<sum;
	return 0;
}