#include<bits/stdc++.h>
#include<cstdio>
#define int long long
#define endl '\n'
using namespace std;
int sl[200005];
char zm[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sl[i]>>zm[i];
	}
	int l=1,r=n,cnt=0;
	while(l<r){
		if(zm[l]!=zm[r]){
			if(sl[l]>=sl[r]){
				cnt+=sl[r];
				sl[l]-=sl[r];
				sl[r]=0;
			}else{
				cnt+=sl[l];
				sl[r]-=sl[l];
				sl[l]=0;
			}
		}else{
			if(sl[l]>=sl[r]){
				sl[l]-=sl[r];
				sl[r]=0;
			}else{
				sl[r]-=sl[l];
				sl[l]=0;
			}
		}
		if(sl[l]==0){
			l++;
		}
		if(sl[r]==0){
			r--;
		}
	}
	cout<<cnt;
	return 0;
}