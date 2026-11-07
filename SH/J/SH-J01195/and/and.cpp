#include<bits/stdc++.h>
using namespace std;
long long n,m,a,mxl,ans=0;
string a2;
vector<long long> nums;
vector<string> j2;
string zh(long long a){
	string cnt;
	while(a>0){
		cnt+=a%2+'0';
		a/=2;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a;
		a2=zh(a);
		long long a1=a2.size();
		mxl=max(mxl,a1);
		nums.push_back(a);
		j2.push_back(a2);
	}for(int i=0;i<n;i++){
		long long a1=j2[i].size();
		long long bu=mxl-a1;
		for(long long j=0;j<bu;j++){
			j2[i]+='0';
		}
	}for(int i=mxl-1;i>=0;i--){
		long long cnt=0;
		for(int j=0;j<n;j++){
			if(j2[j][i]=='1'){
				cnt++;
			}
		}if(cnt>=m){
			for(int j=0;j<n;j++){
				if(j2[j][i]=='0'){
					j2[j]="0";
					nums[j]=0;
				}
			}
		}
	}
	bool flag=0;
	long long j=0;
	for(long long i=0;i<m;i++){
		while(j2[j]=="0" && nums[j]==0){
			j++;
		}
		if(!flag){
			ans=nums[j++];
			flag++;
		}else{
			ans&=nums[j++];
		}
	}
	cout<<ans;
	return 0;
}
