#include<bits/stdc++.h>
using namespace std;
char c[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++){
		int a;
		char b;cin>>a>>b;
		for(int i=1;i<=a;i++){
			ans++;
			c[ans]=b;
		}
	}
	long long ans1=0;
	for(int i=1;i<=ans/2;i++){
		if(c[i]!=c[ans-i+1])ans1++;
	}
	cout<<ans1;
}