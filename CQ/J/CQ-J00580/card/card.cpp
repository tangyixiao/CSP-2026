#include<bits/stdc++.h>
using namespace std;
int n,m,last[510000],cards[510000],last2[510000],ans[510000],vis_huas[510000];
bool shou[510000];
int find_last_not_shou(int c,int lun){
	c=last[c];
	while(shou[c]){
		if(c<lun)return 0;
		c=last[c];
	}
	return c;
}
void shouing(int st,int ed){
	for(int i=st;i<=ed;i++){
		shou[i]=1;
	}
}
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>cards[i];
		last[i]=last2[cards[i]];
		last2[cards[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int f=find_last_not_shou(j,i);
			if(f){
				shouing(f,j-1);
			}
		}
		for(int j=i;j<=n;j++){
//			cout<<shou[j]<<' '<<vis_huas[cards[j]]<<' '<<cards[j]<<endl;
			if(!shou[j]&&!vis_huas[cards[j]]){
				ans[cards[j]]++;
				vis_huas[cards[j]]=1;
			}
			shou[j]=0;
		}
		cout<<endl;
		for(int j=1;j<=m;j++){
			vis_huas[j]=0;
		}
		shou[i]=1;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
    return 0;
}
/*
	This file is encoded by UTF-8
	10:42没有思路
	对于一盘游戏，一张牌被夹在两个数中间就会没 
	3121323121
	你说得对但是我们可以建立一个bool数组b[i]代表它在第i轮会不会被收走 
	1111110100
	留下来的都是最后一张点数为n的牌
	看1，没有牌会对1产生威胁，1=下标10
	看2，2右边有1，只有在2左边没1时才能活下来
	3呢？ 
	哎呀做不出来
	真的是普及难度吗？
	11：09了...
	2在第8（左边的1没了），6（把3，1吃了） 3（把威胁到第二个的吃了）时活得下来 
	让前面的自己牌把威胁到自己的全吃了
	不管了，想拿部分分就n方m(还是nm?)模拟
	这题至少24，最多50吧，应该能得个一等奖，反正AK不了 
	IIIIIIIIIIII
	    III
	    III
	    III
	    III
	    III
	    III
	IIIIIIIIIIII
	
	  lo    ve
    lovelovelove
  lovelovelovelovel
 lovelovelovelovelov
   lovelovelovelo
      lovelove
        love
        
        
    CCCCCCCCCCCCCC
    CC
    CC
    CC
    CC
    CC
    CC
    CC
    CCCCCCCCCCCCCC
	
	CCCCCCCCCCCCCC
    CC
    CC
    CC
    CC
    CC
    CC
    CC
    CCCCCCCCCCCCCC
    
    FFFFFFFFFFFFFF
    FF
    FF
    FF
    FFFFFFFFFFFFFF
    FF
    FF
    FF
    FF
	11:49做完了
*/