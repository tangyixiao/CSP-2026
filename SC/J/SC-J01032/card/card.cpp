#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int nn=n;
	int k=1;
	while(n--){
		for(int i=k;i<=nn;i++){
			for(int j=k;j<i;j++){
				if(a[i]==a[j]){
				    for(int k=j;k<i;k++){
				    	a[k]=0;
					}	
				}
			}
		}
		for(int i=1;i<=n;i++){
			a[a[i]]++;
		}
		k++;
	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}