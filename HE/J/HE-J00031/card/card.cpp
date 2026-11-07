#include<bits/stdc++.h>
using namespace std;
int n,m,a[500000],ans[300000],cards[300000],cards_num;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		for(int o=i;o<n;o++){
			int s=-1;
			for(int j=cards_num-1;j>=0;j--)
				if(cards[j]==a[o])s=j;
			if(s==-1)cards[cards_num++]=a[o];
			else {
				for(int j=s;j<cards_num;j++)cards[j]=0;
				cards_num=s+1;
				cards[cards_num-1]=a[o];
			}
		}
		for(int o=0;o<cards_num;o++)ans[cards[o]-1]++,cards[o]=0;
		cards_num=0;
	}
	for(int i=0;i<m;i++)cout<<ans[i]<<' ';
	return 0;
} 
