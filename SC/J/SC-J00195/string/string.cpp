#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[200005],a2[200005];
char c[200005],c2[200005];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a2[n-i+1]=a[i];
		c2[n-i+1]=c[i];
	}
	
	int i=1,j=1,ans=0;
	while(i<=n&&j<=n){
		if(a[i]>a2[j]){
			a[i]-=a2[j];
			if(c[i]!=c2[j]){
				ans+=a2[j];
			}
			j++;
		}
		else if(a2[j]>a[i]){
			a2[j]-=a[i];
			if(c[i]!=c2[j]){
				ans+=a[i];
			}
			i++;
		}
		else{
			if(c[i]!=c2[j]){
				ans+=a[i];
			}
			i++;
			j++;
		}
	}
	
	cout<<ans/2;
	
	return 0;
}