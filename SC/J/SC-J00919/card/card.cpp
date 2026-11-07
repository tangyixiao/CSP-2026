#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k=1;
	cin>>n>>m;
	int a[n];
	int b[m][2],c[m][2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		b[i][0]=k;
		c[i][0]=k;
		k++;
	}
	int o=0;
	for(int i=0;i<n;i++){
		b[a[i]-1][1]++;
		if(b[a[i]-1][1]==2){
			for(int j=i;a[j]!=b[a[i]-1][0];j--){
				b[a[j]-1][1]--;
			}
			b[a[i]-1][1]--;
		}
		for(int i=0;i<m;i++){
			if(b[i][1]==1){
				c[i][1]++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<c[i][1]<<" ";
	}
	return 0;
}