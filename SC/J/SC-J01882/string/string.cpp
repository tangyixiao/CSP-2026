#include <bits/stdc++.h>
using namespace std;
int n;
int const N=(1e5+5)*2;
char a[N];
long long b[N];
int s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>a[i];
	}
	if(n%2==0){
	    s=n/2;	
	}else{
		s=n/2+1;
	}
	long long sum=0;
	for(int i=1;i<=n/2;i++){
		for(int j=n;j>s;j--){
			if(a[i]!=a[j]){
				sum=sum+b[i];
				break;
			}
		}
	}
	cout<<sum;
	return 0; 
}