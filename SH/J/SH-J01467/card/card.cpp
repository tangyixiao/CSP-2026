#include<bits/stdc++.h>
using namespace std;

long long cards[100005];

//n=4 m=3
//1 2 1 3
long long cnt[100005];
long long deck[100005];
int main(){
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>cards[i]; 
	for(int round=1;round<=n;round++){
		long long total_cards=0;
		for(int i=1;i<=n;i++){
			deck[i]=0;//clear deck
		}
		for(int card_number=round;card_number<=n;card_number++){\
			bool can_add=true;
			for(int i=1;i<=total_cards;i++){
				if(cards[card_number]==deck[i]){
					for(int j=i+1;j<=total_cards;j++){
						deck[j]=0;
						can_add=false;
					}
				}
			}
			if(can_add){
				deck[++total_cards]=cards[card_number];
			}
		}
		for(int i=1;i<=total_cards;i++){
			cnt[deck[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
