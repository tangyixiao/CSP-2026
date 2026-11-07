#include<bits/stdc++.h>
using namespace  std;
long long n,m,ans,a[200010],x,y;
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string,out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		cin>>s1;
		a[i]=m;
		s2+=s1;
	}
	x=n/2;
	if(n%2==0) y=n/2;
	if(n%2!=0) y=n/2+1;
	for(int i=0;i<x;i++){
		for(int j=n-1;j>=x;j--){
			if(s2[i]!=s2[j]){
				ans+=max(a[i],a[j]);
			}
		}
	}
	cout<<ans/y;
	return 0;
}
