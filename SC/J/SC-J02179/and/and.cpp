#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+2;bool b[MAXN][33];
int shi(int id,int num){
	int poss=0;
	while(num){
		b[id][poss++]=num%2;num/=2;
	}
	return poss;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m,maxlength=0;cin>>n>>m;
	vector<int>val(n+1);vector<int>can(n+1,1);
	for(int i=0;i<n&&cin>>val[i];i++)maxlength=max(maxlength,shi(i,val[i]));
	//cout<<"maxlength="<<maxlength<<"\n";
	for(int i=maxlength-1;i>=0;i--){
		//cout<<"第"<<i<<"位"<<"\n";
		int num=0;
		for(int j=0;j<n;j++)num+=(can[j]?b[j][i]:0);
		if(num>=m){//会对结果产生影响
			for(int j=0;j<n;j++)if(can[j]&&!b[j][i])can[j]=0;
		}
	}
	int ans=1<<(maxlength+1);//剩下来的and m个就行
	ans--;
	for(int i=0;i<n&&m;i++)if(can[i])ans=(ans&val[i]),m--;
	cout<<ans;
	return 0;
}