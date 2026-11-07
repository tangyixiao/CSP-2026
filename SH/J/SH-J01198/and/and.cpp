#include<bits/stdc++.h>
using namespace std;
struct nm{
	int id,num,st;
	string ad;
}nums[200010];
int n,m,a[50],ind;
vector<int>g;
vector<int>c_g;
vector<int>c2_g;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		bool flag=1;
		int k;
		cin>>k;
		nums[i].id=i;
		nums[i].num=k;
		for(int j=32;j>=0;j--){
			if(k>=pow(2,j)){
				if(flag){
					nums[i].st=j;
					flag=0;
				}
				k-=pow(2,j);
				nums[i].ad+='1';
			}
			else{
				nums[i].ad+='0';
			}
		}
	}
	bool flag=1;
	for(int i=1;i<=32;i++){
		int tot=0;
		for(int j=1;j<=n;j++){
			if(nums[j].ad[i]=='1')tot++;
		}
		if(flag&&tot>=m){
			ind=i;
			for(int j=1;j<=n;j++){
				if(nums[j].ad[i]=='1')c_g.push_back(nums[j].id);//储存的是最大数字的下标 
			}
			flag=0;
		}
	}
	for(int i=ind+1;i<=32;i++){
		int tot=0;
		for(int j=0;j<c_g.size();j++){
			if(nums[c_g[j]].ad[i]=='1')tot++;
		}
		if(tot>=m){
			for(int j=0;j<c_g.size();j++){
				if(nums[c_g[j]].ad[i]=='1'){
					c2_g.push_back(c_g[j]);
				}
			}
			c_g.clear();
			for(int j=0;j<c2_g.size();j++){
				c_g.push_back(c2_g[j]);
			}
			c2_g.clear(); 
		}
	}
	int ans=nums[c_g[0]].num;
	for(int i=1;i<m;i++){
		ans&=nums[c_g[i]].num;
	}
	cout<<ans;
	return 0;
}
