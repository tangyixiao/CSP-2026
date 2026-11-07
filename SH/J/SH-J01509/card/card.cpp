#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int loc[200005];
	int app[200005];
	for(int i=0;i<=n-1;i++){
	   cin>>loc[i];
	   for(int o=0;o<=i;o++){
		app[loc[o]-1]+=1;
	   }
	}
	for(int i=0;i<=m-1;i++){
		cout<<app[i]<<" "; 
	}
	return 0;
}
