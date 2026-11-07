#include<bits/stdc++.h> 
using namespace std;
long long int n,table[300005],m,card[300005],mid=1,game[5001][5001];
int main(){
	freopen("card1.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		mid=0;
		for(int j=i;j<=n;j++){
			bool t=0;
			for(int e=1;e<=mid;e++){
				if(card[j]==table[e]){//收牌 
					mid=e;
					t=1;
				}
			}
			if(t==0){
				mid++;
				table[mid]=card[j];
				
			}
		}
		for(int j=1;j<=mid;j++){
			game[i][table[j]]=1;
		}
	
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(game[j][i]==1){
				cout<<j<<' ';;
			}
		}
		cout<<endl;
	}
	return 0;
}