#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int b[1000000];
int c[1000000];
typedef long long ll;
int main(){
	freopen(card.in,"r",stdin);
	freopen(card.out,"w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int l=0;l<n;l++){
		for(int i=l;i<n;i++){
			c[i]=a[i];
			for(int j=l;j<i;j++){
				if(c[i]==c[j]){
					for(int k=j;k<i;k++){
						c[k]=0;
					}
					break;
				}
			}
		}
		for(int i=l;i<n;i++){
			if(c[i]){
				b[c[i]-1]+=1;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 
*/
