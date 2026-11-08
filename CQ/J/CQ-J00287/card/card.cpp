#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],fi[300005],aa[300005],sa[300005]; //fi_i表示点数为i的牌的最后一个位置的下标 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		fi[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int cnt=i,ans=0;
		while(cnt<=n){
			ans++;
			aa[a[cnt]]++;
			cnt=fi[a[cnt]]+1;
		}
	}for(int i=1;i<=m;i++) cout<<aa[i]<<" ";
	return 0;
}
//注意看，眼前这个人在打暴力，他本来以为自己是对的
//可惜他注意到当数列为 1,2,3,4,5,---,n 时，若n=m=3e5，那么他就会炸飞

//屏幕前的观众觉得我会一等吗
