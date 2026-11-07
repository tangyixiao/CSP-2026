#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int nums[N];
bool cmp(int a,int b){
	return a<b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	sort(nums,nums+n,cmp);
	int res=nums[n-1];
	for(int i=0;i<m;i++){
//		cout<<1;
		int ans=res&nums[n-i-1];
		res=ans; 
//		cout<<res;
	}
//	int s=15;
//	int o=12;
//	int u=s&o;
	cout<<res;
	return 0;
}
