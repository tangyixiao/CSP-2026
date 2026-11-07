#include<bits/stdc++.h>
#define int6 long long
using namespace std;
int6 n,a[200010],cnt=0;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int6 l=1,r=n;
	while(l<=r){
		if(a[l]<a[r]){
			if(c[l]!=c[r]) cnt+=a[l];
			a[r]-=a[l];
			l++;
		}
		else if(a[l]>a[r]){
			if(c[l]!=c[r]) cnt+=a[r];
			a[l]-=a[r];
			r--;
		}
		else{
			if(c[l]!=c[r]) cnt+=a[r];
			l++,r--;
		}
	}
	cout<<cnt;
	return 0;
}
