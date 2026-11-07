#include<bits/stdc++.h>
using namespace std;
int n,m;
int kards[500010];
int playing_kard[500010];
int score[300010];
int each_kard[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>kards[i];
		score[i]=kards[i];
	}
	sort(score,score+n+1);
	for(int i=1;i<=n;i++){
		if(score[i]==score[i-1]){
			for(int j=i;j<=n;j++){
				score[j]=score[j+1];
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) playing_kard[j]=0;
		int flag=0,markon=0;
		for(int j=i;j<=n;j++){
			flag++;
			playing_kard[j]=kards[j+markon];
			for(int k=i;k<j;k++){
				if(playing_kard[k]==playing_kard[j]){
					markon=markon+j-k;
					j=k;
					break;
				}
			}
			if(flag==n) break;
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=n;k++){
				if(playing_kard[k]==score[j]){
					each_kard[j]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<each_kard[i]<<" ";
	return 0;
}