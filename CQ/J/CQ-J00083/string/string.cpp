#include<bits/stdc++.h>
#define int long long
using namespace std;
int	a[200005][2];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,tot=0,t=0,ans=0;
	cin>>n;
	int l=0,r=n-1;
	for(int i=0;i<n;i++){
		char ch;
		cin>>a[i][0]>>ch;
		a[i][1]=ch;
		tot+=a[i][0];
	}
	while(t<tot/2&&l!=r){
		if(a[l][0]>a[r][0]){
			ans+=(a[l][1]==a[r][1]?0:min(a[r][0],tot/2-t)),t+=a[r][0];
			a[l][0]-=a[r][0],r--;
		}else{
			ans+=(a[l][1]==a[r][1]?0:min(a[l][0],tot/2-t)),t+=a[l][0];
			a[r][0]-=a[l][0],l++;
		}
	}
	cout<<ans;
	return 0;
}
