#include<bits/stdc++.h>
using namespace std;
long long a[2000001];
char c[2000001];
long long n;
long long cnt=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	long long l=1;
	long long r=n;
	while(l<r){
		if(c[l]!=c[r]){
			cnt+=min(a[l],a[r]);
		}
		int minn=min(a[l],a[r]);
		a[l]-=minn;
		a[r]-=minn;
		if (a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
	}
	cout<<cnt;
	return 0;
}
