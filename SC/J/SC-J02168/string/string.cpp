#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	string s;
	cin>>n;
	int t=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int ans=0;
	for(int i=1,j=n;i<=n,j>=1;i++,j--){
		if(c[i]!=c[j]){
			if(a[i]<a[j]){
				ans+=a[i];
				a[j]-=a[i];
				a[i]=0;
				j++;
			}
			if(a[i]>a[j]){
				ans+=a[j];
				a[i]-=a[j];
				a[j]=0;
				i--;
			}
			if(a[i]==a[j]){
				ans+=a[i];
				a[i]=0;
				a[j]=0;
			}
		}
	}
	cout<<ans;
	return 0;
} 
/*

3 
2 a
2 b
1 c

6 
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b


*/