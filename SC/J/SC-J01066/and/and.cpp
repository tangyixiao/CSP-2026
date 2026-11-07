#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> nums(n);
	for(int& i:nums){
		cin>>i;
	}
	vector<bool> is_del(n,0);
	int del_cnt=0;
	bool bin[3005][31]={0};
	for(int i=0;i<n;i++){
		int x=nums[i];
		int j=0;
		while(x!=0){
			bin[i][j]=x%2;
			x/=2;
			j++;
		}
	}
	vector<int> ans;
	for(int i=30;i>=0;i--){
		//cout<<1;
		int cnt=0;
		for(int j=0;j<n;j++){
			if(is_del[j])continue;
			cnt+=bin[j][i];
		}
		if(cnt>=m){
			ans.push_back(1);
			for(int j=0;j<n;j++){
				if(del_cnt<n-m){
					is_del[j]=(!bin[j][i]||is_del[j]);
					del_cnt++;
				}
			}
		}else{
			ans.push_back(0);
		}
		
	}
	reverse(ans.begin(),ans.end());
	int res=0;
	for(int pos=0;pos<32;pos++){
		res+=pow(2,pos)*ans[pos];
	}
	cout<<res<<endl;
	return 0;
}