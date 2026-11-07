#include<bits/stdc++.h>
using namespace std;
int n,m;
int nums[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>nums[i];
	}
	sort(nums,nums+n+1);
	int k=nums[n];
	for(int i=n-1;i>=n-m;i--){
		k=k&nums[i];
	}
	cout<<k;
	return 0;
}