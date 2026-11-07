#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a;
	int desk[m + 5] = { };
	int table[m] = { };
	int sum[m];
	int ans = 1;
	
	while(n--){
		cin>>a;
		for(int i = 1;i <= n;i++){
			if(a != desk[i]){
				desk[i] = a;
				table[i] = a;
			}
			if(a == desk[i]){
				for(int j = 1;j <= i;j++){
					table[j] = desk[j];
				}
				for(int k = i;k <= n;k++){
					table[k] = 0;
				}
				desk[i] = a;
				table[i] = a;
				break;			
			}		
		}
		for(int i = 1;i <= m;i++){
			sum[table[i]] ++;
		}
		for(int i = 1;i <= n;i++){
			desk[i] = table[i];
		}
		ans++
	}
	
	for(int i = 1;i <= m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}
