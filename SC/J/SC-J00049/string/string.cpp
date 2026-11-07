#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char c[N],l[N];
int a[N],p;
int n,sum=0,q=0,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	if(sum%2==0)  p=sum/2;
	else  p=sum/2+1;
	for(int i=1;i<=p;i++){
		if(n==1){
			cout<<0;
			break;
		}
		if(c[i]==c[n-i+1]) continue;
		else if(c[i]!=c[n-i+1]) ans+=a[i];
	}
	cout<<ans;
	return 0;
}