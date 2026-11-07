#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000010]; 
long long lg[32];
long long vis[200005][32];
long long val[32];
long long vist[200005];
void hs(long long x,long long id){
	for(int i=31;i>=0;i--){
		if(x>=lg[i]){
			x-=lg[i];
			val[i]++;
			vis[id][i]=1;
		}
		if(x==0){
			return;
		}
	}
	return;
}
void hs1(long long x,long long id){
	for(int i=31;i>=0;i--){
		if(x>=lg[i]){
			x-=lg[i];
			val[i]--;
		}
		if(x==0){
			return;
		}
	}
	return;
}
long long ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
 	cin>>n>>m;
 	lg[0]=1;
 	lg[1]=2;
 	for(int i=1;i<=31;i++){
 		lg[i]=lg[i-1]*2;
		//cout<<lg[i]<<" "; 
	} 
	//cout<<endl;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		hs(a[i],i);
	}
	for(int i=30;i>=0;i--){
		//cout<<val[i]<<" ";
		if(val[i]>=m){
			for(int j=1;j<=n;j++){
				//cout<<vist[j]<<" ";
				if(vist[j]){
					continue;
				}
				if(vis[j][i]==0){
					vist[j]=1;
					hs1(a[j],j); 
				}
			}
			ans+=lg[i];
		} 
		//cout<<endl;
	}
	cout<<ans;
	return 0;
}
/*
分析按位与的性质
考虑到 n 和 m 较大 ，且数字的顺序并不影响结果，考虑贪心
对于每一位，枚举二进制后，该为为 1 的元素的个数是否到 m
如果改为到达 m 则将其标记，并将其所有贡献清除
因为每个数只会被清楚一次，所以 该遍历的的复杂度为 30*200000+30*2000000
复杂的 30*200000+30*2000000+30*200000=18000000
4 2
3 15 12 12
 
0011
1111
1100
1100
 
5 3
31 3 1 15 7

11111
00011
00001
01111
00111
*/