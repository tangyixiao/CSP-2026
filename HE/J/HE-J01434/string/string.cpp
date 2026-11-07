#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[10010];
	string s[10010];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
	}
	if(n<=1)
		cout<<0;
	if(n==2){
		int m=max(a[1],a[2]);
		int z=a[1]+a[2];
		if(a[1]-a[2]==0){
			cout<<0;
		}
		else{
			cout<<z-m;
		}
	}
	return 0;
}
