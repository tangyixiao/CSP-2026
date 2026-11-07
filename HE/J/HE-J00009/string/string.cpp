#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int n;
long long a[N],ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<=r){
		if(a[l]>=a[r]){
			if(c[l]!=c[r])ans+=a[r];
			a[l]-=a[r--];
		}else{
			if(c[l]!=c[r])ans+=a[l];
			a[r]-=a[l++];
		}
	}
	cout<<ans;
	return 0;
}
