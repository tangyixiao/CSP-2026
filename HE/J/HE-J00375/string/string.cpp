#include <bits/stdc++.h>
using namespace std;
int n;
char c,d;
long long ans=0,a,t,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(n-i>=1){
			b=a;
			d=c;
		}
		if(d==c) t+=a;
		else t=b;
		if(d!=c&&t%2!=0){
			d=c;
			ans+=a;
		}else if(t%2==0){
			ans+=a/2;
		}
	}
	cout<<ans;
	return 0;
}
