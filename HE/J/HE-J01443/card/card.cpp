#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cards[500005],ans[500005];
int sttgm(int c,int hs){
	for(int i=c;i<=n-c+1;i++){
		cards[i]=a[i+c-1];
		bool flag=false;
		for(int j=1;j<i;j++){
			if(flag){
				cards[j]=0;
				continue;
			}
			if(cards[j]==cards[i]){
				flag=true;
			}
		}if(flag)cards[i]=0;
	}int ans=0;
	for(int i=1;i<=n;i++){
		if(cards[i]==hs)ans++;
	}return ans;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			ans[j]+=sttgm(i,j);
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
