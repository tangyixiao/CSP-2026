#include<bits/stdc++.h>
using namespace std;
int cnt[100005],m,n;//cnt是一个桶 
int card[100005];//牌堆 
int table[100005];//桌子上的牌int 
int tcard=0;//table上有几张牌
//保证tcard+cardnum==card-ni 
int main(){
	cin>>m>>n;
	//输入
	for(int i=1;i<=m;i++){
		cin>>card[i];
	} 
	 //一共n局 
	
	for(int i=1;i<=n;i++){
		for(int cardnum=i;cardnum<=m;cardnum++){//发牌，判定 
			table[tcard]=card[cardnum];
			tcard++;//放在桌上，发牌 
			for(int j=0;j<tcard;j++){
				if(table[j]==table[tcard]){
					for(int s=j;s<=tcard;s++){//收牌 
						table[s]=0;	
					}
					tcard-=(tcard-j);
				}
			}//判定 
			
		}
		for(int i=0;i<tcard;i++){
			int midlej=table[i];
			cnt[midlej]++;
		}
		tcard=0;
	}
	//输出 
	for(int i=1;i<=n;i++){
		cout<<cnt[i]<<" ";
	}
}