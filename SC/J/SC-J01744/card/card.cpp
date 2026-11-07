#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int zc[500001];
int ans[500001];
vector<int> chong[500001];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof(ans));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>zc[i];
		chong[zc[i]].push_back(i);
	}
	int j;
	for(int i=1;i<=n;i++){
		j=i;
		while(j<=n){
			ans[zc[j]]++;
			if(chong[zc[j]][chong[zc[j]].size()-1]>j) 
				j=chong[zc[j]][chong[zc[j]].size()-1]+1;
			else j++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
} 