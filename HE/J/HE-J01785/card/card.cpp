#include<bits/stdc++.h>
using namespace std;
int x[500000];
int main(){
	freopen("card.in","r",stdin);
	int n,m;
	cin>>n>>m;
	int l[n];
	for(int i=0;i<n;i++){
		cin>>l[i];
	} 
	for(int qwe=0;qwe<n;qwe++){
		int table[n]={0};
		for(int i=qwe;i<n;i++){
			for(int j=0;j<i-qwe;j++){
				if(table[j]==l[i]){
					for(int k=j;k<i-qwe;k++){
						table[k]=0;
					}
				}
			}
			table[i-qwe]=l[i];
		}
		for(int i=0;i<n;i++){
			x[table[i]]+=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<x[i]<<' ';
	}
	freopen("card.out","w",stdout);
	return 0;
}
