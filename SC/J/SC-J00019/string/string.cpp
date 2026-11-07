#include<bits/stdc++.h>
using namespace std;
char a[999999];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	cin>>t;
	long long n=0;
	for(int i=1;i<=t;i++){
		long long s;
		char z;
		cin>>s;
		cin>>z;
		n+=s;
		long long j=1;
		long long q=s+j;
		for(;j<=q;j++){
			a[j]=z;
		}
	}
	int cnt=0;
	if(n%2==1){
		for(int i=1;i<=n/2;){
			for(int j=n/2+1;j<=n;){
				i++;
				j++; 
				if(a[i]!=a[j]){
					cnt++;
				}
			}
		}
	}else{
		for(int i=1;i<=n/2;i++){
			for(int j=n/2;j<=n;j++){
				if(a[i]!=a[j]){
					cnt++;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}