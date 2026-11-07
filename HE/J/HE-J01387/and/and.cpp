#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],ta[200005];
int yu(int x,int y){
	int bx[35]={},by[35]={},res[35]={},wei=1;
	while(x!=0){
		bx[wei]=x%2;
		x/=2;
		wei++;
	}
	
	int weii=1;
	while(y!=0){
		by[weii]=y%2;
		y/=2;
		weii++;
	}
	
	for(int i=1;i<=max(wei-1,weii-1);i++){
		if(bx[i]==1 && by[i]==1){
			res[i]=1;
		}
		else{
			res[i]=0;
		}
	}
	int ans=0;
	for(int i=min(wei-1,weii-1)-1;i>=0;i--){
		if(i=0){
			ans+=res[i]*1;
		}
		else{
			ans+=res[i]*pow(2,i);
		}
		
	}
	return ans;
}
void dfs(int x){
	if(x>m){
		int maxn=-1,sum;
		for(int i=1;i<=m;i++){
			if(ta[m]==1){
				sum = yu(sum,a[i]);
			}
		}
		
		
		cout<<sum;
		return;
	}
	else{
		ta[x]=1;
		dfs(x+1);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//dfs(1);
	cout<<a[2];
	return 0;
}
