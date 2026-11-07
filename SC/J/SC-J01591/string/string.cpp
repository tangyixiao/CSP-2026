#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n;
int a[N];
char c[N],c1[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			ans++;
			c1[ans]=c[i];
		}
	}
	int mid=ans/2,cnt=0;
	for(int i=1;i<=mid;i++){
		if(c1[i]!=c1[ans-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
