#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0,a[200005]={0};
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	long long x=n,f=0,ans=0;
	for(int i=1;i<=n;i++){
		if(f>l/2||x==i)    break;
		f+=a[i];
		long long t=a[i];
		while(true){
			if(t>a[x]){
				if(c[i]!=c[x])    ans+=a[x];
				t-=a[x];
				a[x]=0;
				x--;
			}
			else{
				if(c[i]!=c[x])    ans+=t;
				a[x]-=t;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
