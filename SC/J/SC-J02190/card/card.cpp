#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int const N=500005;
int a[N],ans[300005];
vector <int> tab;
int n,m;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	for(int i=1;i<=n;i++){
		int end=1;
		
		for(int j=i;j<=n;j++){
			
			for(int x=1;x<=end;x++){
				if(tab[x]==a[j]) {
					end=x;
					
				}
				
			}
			
			end++;
			tab[end]=a[i];
			
		}
		
		for(int j=1;j<=end;j++){
			ans[tab[j]]++;
		}
		
		
	}

	for(int i=1;i<=m;i++){
		cout<<ans[i];
	}
	
	return 0;
} 