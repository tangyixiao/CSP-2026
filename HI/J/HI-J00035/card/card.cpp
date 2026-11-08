#include<bits/stdc++.h>
using namespace std;
int pocker[500000+5];
int table[500000+5];
int mutong[500000+5];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		cin>>pocker[i];
	}
	int zhizen=1;
	for(int i=1;i<=n;i++){
		table[i]=pocker[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<zhizen;j++){
			if(pocker[i]==pocker[j])table[j]=1;
		}
		for(int b=1;b<=n;b++){
			if(table[b]==0){
				mutong[b]++;
			}
		}
	}
	for(int i=1;i<=500000+1;i++){
		if(mutong[i]!=0){
			cout<<mutong[i]<<" ";
		}
	}
	return 0;
	
} 
