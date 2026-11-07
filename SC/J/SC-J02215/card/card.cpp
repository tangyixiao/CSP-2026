#include<bits/stdc++.h>
using namespace std;
int a[500005],q[500005];
int z;
struct node{
	bool f;
	int x;
};
node num[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		
		
		
		//每一局 
		for(int j=i;j<=n;j++){
			int s=a[j];
			//每个数s 
			if(!num[s].f){
			   
				//没有这个数 
				q[z]=s;
				num[s].x=z;
				num[s].f=1;
				z++;
				
			}else{
				//有这个数
				
				for(int k=num[s].x+1;k<=z-1;k++){
					q[k]=0;
				} //清空 
				z=num[s].x+1;
			}
			/*
			for(int k=0;k<=z-1;k++){
				cout<<q[k]<<" ";
			} cout<<endl;//输出桌面 */
			
		}
		for(int k=0;k<=z-1;k++){
			int s=q[k];
			ans[s]++;
		}//统计 
		
		for(int j=0;j<=n;j++){
			q[j]=0;
			num[j].f=0;
		}//清空 
		
		z=0; 
	}
	
	
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}//12? 总分100+48+40+12=200？ 