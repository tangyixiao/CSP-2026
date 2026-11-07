#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N],cn,ans;
char q[N];
long long sum,ll[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cn++;
		cin>>a[cn]>>q[cn];
		sum+=a[cn];
		if(int(q[cn-1])==int(q[cn])){
			a[cn-1]+=a[cn];
			cn--;
		}
	}
	for(int i=1;i<=cn;i++){
		ll[i]=a[i]+ll[i-1];
	}
	int r=(sum+1)/2;
	int l=r;
	if(sum%2==0){
		r++;
	}
	int j=0;
	while(r>ll[j+1]){
		j++;
	}
	int k=0;
	while(l>ll[k+1]){
		k++;
	}
	while(r<=n){
		r++;
		l--;
		if(ll[j+1]<r) j++;
		if(ll[k]>l) k++;
		if(int(q[j])!=int(q[k]))
			ans++;
	}
	cout<<ans;
	return 0;
}