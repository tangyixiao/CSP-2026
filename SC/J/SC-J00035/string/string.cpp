#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
char b[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a[i]>>b[i];	
	}
	if(n==1){
		if(a[1]/2==1)cout<<"1";
		else cout<<"0";
		return 0;
	}
	if(n==2){
		if(b[1]==b[2]) {
		cout<<0;
		return 0;	
		}
		if(b[1]!=b[2]) {
		cout<<a[1];	
		return 0;
		}
}
else{
	long long x=0;
	for(int i=1;i<=n;i++){
		if (b[i]==b[1]) x+=a[i];
	}
	cout<<x;
}
	return 0;
}