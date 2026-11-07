#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],maxk,ans=(1<<31)-1,num;
bool k[200001][31],vis[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	memset(vis,1,sizeof(vis));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i];
		//预处理 
		for(int j=30;j>=0;j--){
			if(x>=(1<<j)){
				x-=(1<<j);
				k[i][j]=true;
				maxk=max(maxk,j);
			}
		}
	}
	num=n;
	//num:还有希望被选中的数字们的个数
	for(int i=maxk;i>=0;i--){
		int numm=0;
		//numm:符合贪心要求的个数 
		for(int j=1;j<=n;j++){
			if(k[j][i]&&vis[j]){
				numm++;
			}
		}
		//numm<m,无法满足要求，设这一位为0 
		if(numm<m){
			continue;
		}
		//numm>=m,可放心筛选 
		for(int j=1;j<=n;j++){
			if(!k[j][i]){
				if(vis[j]){
					vis[j]=0;
					num--;				
				}
			}//不符合要求的滚蛋 
		}
		if(num==m){
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(vis[i]){
			ans=ans&a[i];
		}
	}
	cout<<ans;
	return 0;
}
