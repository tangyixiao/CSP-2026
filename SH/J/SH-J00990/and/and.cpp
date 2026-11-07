#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	int ans;
	int i;
	for (i=2;i<=n;i++){
		ans=a[i]&a[i+1];
		if(ans){
			break;
		}
	}
	i++;
	int cnt=2;
	for (;cnt!=m;i++){
		if(ans&a[i]!=0){
			ans=ans&a[i];
			cnt++;
		}
		if(i>n){
			cout<<0;
			return 0;
		}
	}
	cout<<ans;
	return 0;
}
