#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card4.in","r",stdin);
	freopen("card.out","w",stdout);
	//提交时记得删掉注释哦！！！ freopen别漏 文件名看看写没写对！！！
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> jhy(m+1,0);//每轮游戏结束后m种牌的次数
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){//轮
		vector<int> lmy(m+1,-1);//第m种牌最后一次出现的位置 
		 for(int j=i;j<=n;j++){
			if(lmy[a[j]]==-1){
				lmy[a[j]]=j;
			} 
			else{
				int z=lmy[a[j]];
			//	cout<<i<<' '<<j<<'\n';
				for(int k=z;k<j;k++){
					lmy[a[k]]=-1;
			//		cout<<a[k]<<' ';
				}
				lmy[a[j]]=j;
			//	cout<<'\n';
			}
		}
	//	cout<<i<<'\n';
		for(int j=1;j<=m;j++){
			if(lmy[j]!=-1) {
	//			cout<<j<<' ';
				jhy[j]++;
			}
		}
	//	cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<jhy[i]<<' ';
	}
	return 0;
}

