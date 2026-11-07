#include<iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
vector<long long> wei[41];
long long win[2][20001];
set<long long> weisa[41];
int o=0;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(wei,0,sizeof(wei));
	int n,m;
	cin>>n>>m;
	long long k,u;
	int high=0;
	for(int i=0;i<n;i++){
		cin>>k;
		u=k;
		for(int j=1;k!=0;j++){
			if(k&1==1) {
				wei[j].push_back(u);
				weisa[j].insert(u);
				high=max(high,j);
			}
			k/=2;
		}
	}
	
	long long s=1<<(high-1),ans=0;
	bool flag=true;
	int hi;
	for(int i=high;i>=1;i--){
		if(wei[i].size()>=m){
			if(flag){
				hi=wei[i].size();
				for(int j=0;j<wei[i].size();j++) 
					if(flag) win[o][j]=wei[i][j];
			}
			else{
				int y=0;
				for(int j=0;j<hi;j++){
					if(weisa[i].find(win[o][j])!=weisa[i].end())
						win[(o+1)%2][y++]=win[o][j];
				}
				if(y>=m){
					ans+=s;
					o=(o+1)%2;
					hi=y;
				}
			}
			
			if(flag) {
				ans+=s;
				flag=false;
			}
		}
		s=s>>1;
	}
	cout<<ans;
} 