#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],b[N],id[N],ans[M];//a是各个牌,b是游戏进行时的牌堆,id是进行时的各个牌在牌堆中的位置,就是下标,ans存储答案.
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;cin>>n>>m;//n是牌数,m是牌所表示的数的种类的数量 
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){//一局游戏 
		int now=1;//当前位置下标 
		for(int j=i;j<=n;j++){
			int k=a[j];
			if(b[id[k]]==0){//没出现过 
				b[now]=k;
				id[k]=now;//当前牌的下标 
				++now;	
			}
			else {//出现过了 
				for(int l=id[k]+1;l<=n;l++){
					if(b[l]==0)break;//优化 
					id[b[l]]=0;
					b[l]=0;
				}
				now=id[k]+1;//更新当前位置 
			}
			for(int j=1;j<=n;j++){
				if(b[j]==0)break;
			}
		}	
		for(int j=1;j<=n;j++){
			if(j==0)break;
			ans[b[j]]++;//记录答案.
			id[b[j]]=0;b[j]=0;//清空数据 
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
//4 3
//1 2 1 3
