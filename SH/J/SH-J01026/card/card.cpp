#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long a[600000];
long long ans[600000];
long long ng[600000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 0 ; i < n;i++){
		cin>>a[i];
	}
	long long nc;
	//bool flag = 0;
	for (long long i = 0; i < n;i++){
		nc = i;
		for(long long k = i; k < n; k++){
			
			for (long long p = 0; p < k ; p++){
				if(ng[p]== ng[nc]){
					//flag = 1;
					nc = p;
					continue;
					
				}
				//if(flag = 1){
					
				//}
			}
			nc++;
			ng[nc] = a[k];
			
		}
		for(long long k = i; k < m;k++){
			ans[ng[k]]++; 
		}
	}
	for(int i = 1; i <= m ; i++){
		cout<<ans[i]+1<<' ';
	}
	return 0;
} 
