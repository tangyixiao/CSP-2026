//这分明就是老鼠洗完头的大模拟,CCF纯喝大了 

#include<bits/stdc++.h>

using namespace std;

const int n_max=5e5;
const int m_max=3e5;

int n,m,finds; 
int cards[n_max+5];//从[1]开始存,存的是卡牌点数,[1]是顶部 
int bkt[m_max+5];//从1存 下标是点数 

int main(){
	//注释！！！！！！！！！！！！！！！！！！！！！！！
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>cards[i];
	}
	
	for(int i=1;i<=n;i++){
		//p("第%d轮:\n",i);
		//模拟第i轮 
		
		int tables[n_max+5];//这玩意存的是编号！！！！ 
		int top=0;//桌面栈 
		//每一轮桌面都是空的 
		
		//收走的牌在【本局中】不能使用  
		
		for(int j=i;j<=n;j++){//拿第j张卡牌(j是编号) 
			
			//看桌子上有没有当前点数相同的卡牌
			bool take=false;
			int new_top=-1;
			for(int k=0;k<top;k++){//看桌子上第k张(tables[k])的编号 
				if(cards[tables[k]]==cards[j]){
					take=true; 
					new_top=k;//让这里作为新的栈顶 
					break;
				}
			} 
			if(take) top=new_top;//更新栈顶
			
			tables[top++]=j;//放上去 
		}
		
		//一堆卡牌都拿完了,接下来该统计点数了
		for(int j=0;j<top;j++){
			bkt[cards[tables[j]]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<bkt[i]<<' ';
	}
	
	return 0;
} 
