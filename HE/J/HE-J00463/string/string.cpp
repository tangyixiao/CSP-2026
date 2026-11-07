#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,a[N],ans,l,cnt,m,x,y;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	for(int i=1;i<=n;i++){
		while(a[i]>0){
			x=a[i],y=a[n-cnt];
			if(c[i]!=c[n-cnt])
				ans+=min(x,y);
			a[i]-=min(x,y),a[n-cnt]-=min(x,y);
			if(a[n-cnt]==0)
				cnt++;
		}
	}
	cout<<ans;
	return 0;
}
