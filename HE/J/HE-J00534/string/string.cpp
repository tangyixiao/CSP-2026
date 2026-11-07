#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a[i]+=a[i-1];
	}
	long long right=a[n],left=1;
	int sl=1,sr=n;
	long long ans=0;
	while(left<=right){
		if(left>a[sl]) sl++;
		if(right-a[sr-1]==0) sr--;
		if(c[sl]!=c[sr]){
			ans++;
		}
		left++;
		right--;
	}
	cout<<ans;
	return 0;
}
