#include<bits/stdc++.h>
using namespace std;
int a[500005];
int desk[500005];
int mark[500005] = {0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int cnt = 1;
	while(true){
		if(cnt == n){
			if(cnt <= 1){
				break;
			}
			for(int i=1;i<=n;i++){
				if(desk[i] != 0){
					mark[desk[i]]++;
				}
			}
			cnt = 0;
			int mark[500005] = {0};
		}
		int f = 0;
		for(int i=1;i<cnt;i++){
			if(desk[cnt] == desk[i]){
				f = 1;
				break;
			}
		}
		if(f){
			for(int i=1;i<cnt;i++){
				desk[i] = 0;
			}
		}
		desk[cnt] = a[cnt];
		cnt++;
	}
	for(int i=1;i<=m;i++){
		cout<<mark[i]<<" ";
	}
	return 0;
}
