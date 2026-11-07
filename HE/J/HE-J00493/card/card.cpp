#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;cin >> n >> m;
	bool flaga = 1;
	int card[m+15000],card1[m+15000];
		int arr[n+10];
	fill(card,card+14990+m,0);
	
	fill(card1,card1+14990+m,0);
	fill(arr,arr+5+n,0);

		for(int i = 1;i <= n;i++){
			cin >> arr[i];
		
			card1[arr[i]] = 1;
		}
	for(int i = 1;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			card[arr[j]]++;
			
		}
	}	
	for(int i = 0;i <= n;i++){
		if(card1[i] != 0 ){
			cout<<card[i]+1 <<" ";
		}
	}
	return 0;
}





 
