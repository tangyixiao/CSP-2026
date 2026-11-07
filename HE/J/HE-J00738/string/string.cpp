#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,l1=0,l2=0,m=0;
	cin>>n;
	string a;
	char b;
	for(long long i=0;i<n;i++){
		cin>>x>>b;
		l1+=x;
		for(long long j=0;j<x;j++){
			a+=b;
		}
	}
	for(long long i=0,j=l1-1;i<j;i++,j--){
		if(a[i]!=a[j])m++;
	}
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
