#include<bits/stdc++.h>
using namespace std;
long long mx(long long a,long long b){
	if(a>=b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s;
	cin>>n;
	long long a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=2;i--){
		if(a[i]<=s){
			break;
		}
		s=mx(s,(a[i]&a[i-1]));
	}
	cout<<s;
	return 0;
}
