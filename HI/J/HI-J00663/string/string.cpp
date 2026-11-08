#include<bits/stdc++.h>
using namespace std;
int a[1000000];
string b[1000000],d[1000000];
int main(){
	long long n,c=0,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++){
			d[c+j]=b[i];
		}
		c=c+a[i];
	}
	for(int i=0;i<=c/2;i++){
		if(d[i]==d[c-i]){
		}else{
			s=s+1;
		}
	}
	cout<<s;
	return 0;
}
