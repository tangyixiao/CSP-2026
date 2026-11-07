#include<bits/stdc++.h>
using namespace std;
unsigned n,m;
unsigned a;
unsigned maax;
int xb,j=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int>v1(n);
	while(j<n){
		for(int i=0;i<n;i++){
			if(v[i]>maax){
				maax=v[i];
				xb=i;
			}
		}
		v[xb]=0;
		v1[j]=maax;
		maax=0;
		j++;
	}
	int ans=v1[0];
	for(int i=1;i<m;i++){
		ans=ans&v1[i];
	}
	cout<<ans;
	return 0;
} 
