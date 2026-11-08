#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> g(n);
	for(int i=0;i<n;i++){
		cin>>g[i];
	}
	int ans=0;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		if(g[0]==g[i+1]){
			for(int j=0;j<i+1;j++){
				g[j]=0;	
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int r=1;r<m+1;r++){
				if(g[i]==r){
					a[r]++;
				}	
			}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
