#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[200050];
char c[2000050];
int cnt=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				cnt+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]<=a[r]){
				cnt+=a[l];
				a[r]-=a[l];
				l++;
			}
		}else if(c[l]==c[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]<=a[r]){
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<cnt;
	return 0;
}