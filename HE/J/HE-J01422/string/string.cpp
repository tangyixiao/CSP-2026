#include<bits/stdc++.h>
using namespace std;
long long n,a[101],ji=1,k;
char c[101],b[101];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			b[ji]=c[i];
			ji++;
		}
	}
	for(int i=1;i<=n/2;i++){
		if(b[i]!=b[n-i+1]){
			k++;
		}
	}
	cout<<k;
}
