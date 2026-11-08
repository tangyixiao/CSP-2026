#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
const int M=1e9+7;
long long n;
long long a;
char b;
char c[M];
int main(){
	freopen("string.in", "r",stdin);
	freopen("string .out","w", stdout);
	long long chang=0, ans=0;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a>>b;
		chang+=a;
		for(long long j=0;j<a;j++){
			c[j]=b;
		}
	} 
	for(long long i=0;i<(1+chang)/2;i++){
		long long j=chang-i;
		if(c[i]!=c[j]){
			ans++;	
		}
	}  
	cout<<ans; 
}
