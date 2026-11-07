#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10; 
int n,m,a[N];
map<int,int> mp;
vector<int> e,e2;
int now;
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	now=32;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		e.push_back(a[i]);
	}
	int ans=0;
	while(e.size()>=m){
		for(int i=0;i<(int)e.size();i++){
			for(int j=1;j<=31;j++){
				if(e[i]&(1<<(j-1))){
					mp[j]++;
				}
			}
		}
		bool flag=0;
		for(int i=now-1;i>=0;i--){
			if(mp[i]>=m){
				flag=1;
				now=i;
				break;
			}
		}
		if(!flag){
			cout<<ans;
			return 0;
		}
		//cout<<now<<endl;
		ans|=(1<<(now-1));
		for(int i=0;i<(int)e.size();i++){
			if(e[i]&(1<<(now-1))){
				e2.push_back(e[i]);
			}
		}
		e.clear();
		for(int i=0;i<(int)e2.size();i++)e.push_back(e2[i]);
		e2.clear();
		mp.clear();
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
