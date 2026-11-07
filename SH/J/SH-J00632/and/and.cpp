#include<bits/stdc++.h> 
#define ll long long
#define endl '\n'
using namespace std;
int awy(int a,int b){
	int m=1,sum=0;
	while(a&&b){
		if(a%2==b%2&&a%2==1) sum+=m;		
		a/=2;b/=2;
		m*=2;
	}
	return sum;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> nums(n);
	if(n==m){
		int res;
		for(int i=0;i<n;i++){
			int n;
			cin>>n;
			res=awy(res,n);
		}
		cout<<res;
		return 0;
	}
	if(m==2){
		for(int i=0;i<n;i++) cin>>nums[i];
		int res=-1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				res=max(awy(nums[i],nums[j]),res);
			}
		}
		cout<<res;
		return 0;
	}
	if(m==1){
		for(int i=0;i<n;i++) cin>>nums[i];
		sort(nums.begin(),nums.end());
		cout<<nums[n-1];
		return 0;
	}
	return 0;
}
