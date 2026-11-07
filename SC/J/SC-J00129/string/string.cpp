#include<bits/stdc++.h>
using namespace std;
const long long N=2*1e5;
long long n,a[N],t,sum=1;
char c[N];
char b[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		t=t+a[i];
	}
	for(int i=1;i<=n;i++){
		if(c[sum]==c[sum+1]){
		sum++;
	}
	} 
	if(sum==n){
		cout<<0;
		return 0;
	}
	cout<<t/2;
	return 0;
}