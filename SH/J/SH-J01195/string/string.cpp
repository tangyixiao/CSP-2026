#include<bits/stdc++.h>
using namespace std;
vector<long long> nums;
vector<char> le;
long long n,cnt1,cntl,cntr,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		cnt1+=a;
		nums.push_back(a);
		le.push_back(c);
	}
	cntr=n-1;
	while(cntl<cntr){
		if(nums[cntl]>nums[cntr]){
			if(le[cntl]!=le[cntr]){
				cnt+=nums[cntr];
			}
			nums[cntl]-=nums[cntr];
			cntr--;
			continue;
		}else if(nums[cntl]<nums[cntr]){
			if(le[cntl]!=le[cntr]){
				cnt+=nums[cntl];
			}
			nums[cntr]-=nums[cntl];
			cntl++;
			continue;
		}else{
			if(le[cntl]!=le[cntr]){
				cnt+=nums[cntl];
			}
			cntl++;
			cntr--;
			continue;
		}
	}cout<<cnt;
	return 0;
}
