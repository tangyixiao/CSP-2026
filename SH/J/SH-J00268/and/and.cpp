#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> nums;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nums.push_back(a[i]);
	}
	int ans=0;
	for(int b=30;b>=0;b--){
		int k=(1<<b);
		vector<int> lst;
		int num=0;
		for(int i:nums){
			if((i&k)!=0){
				lst.push_back(i);
				num++;
			}
		}
		if(num<m){
			continue;
		}
		nums.clear();
		for(int i:lst){
			nums.push_back(i);
		}
		ans|=k;
	}
	cout<<ans<<endl;
	return 0;
}
//si lu:cong 30 wei kai shi tan xin.
