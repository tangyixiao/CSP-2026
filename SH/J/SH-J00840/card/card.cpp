#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long c[100000],desk[100000]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m ;
	int all[m]={0};
	for(int i = 1 ; i <= n ; ++i){
		cin >>c[i];
	}
	for(int i = 1 ; i <= n ; ++i){
		for(int j=i ,f=1; j<= n ; ++f,++j){
			desk[f]=c[j];
			int k ;
			bool flag=0;
			for(k=1 ; k <= f-1 ; ++k){

				if(c[j]==desk[k]) {
					flag=1;
					break;
				}
			}
			if(flag){
				for(int s=k+1 ; s <= n ; s++){
					desk[s]=0;
				}
				f=k;
			}
		}
		
		for(int j = 1 ; j <= n ; ++j){
			all[desk[j]] +=1;
		}
		for(int j=1 ; j <= n ; j++){
			desk[j]=0;
		}
	}
	for(int i = 1 ; i <= m ; i++) cout << all[i] << ' ';
	return 0; 
} 
