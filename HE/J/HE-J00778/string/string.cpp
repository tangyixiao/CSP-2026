#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long cnt=0;
	int r=1,l=n;
	while(r<l){
		long long minn=min(a[r],a[l]);
		if(c[r]!=c[l]){
			cnt+=minn;
			//cout<<minn<<'.'<<endl;
		}
		a[r]-=minn;
		a[l]-=minn;
		if(a[r]==0)r++;
		if(a[l]==0)l--;
	}
	cout<<cnt;
	return 0;
}

