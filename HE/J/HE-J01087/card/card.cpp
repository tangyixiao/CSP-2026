#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500007];
int ans[500007];
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int start=0;start<n;start++){
		vector<int> x;
		int k=start;
		for(int i=0;i<n-start;i++){
			for(int j=0;j<x.size();j++){
				if(a[k]==x[j]){
					for(int z=j;z<=x.size();z++) x.pop_back();
				}
			}
			x.push_back(a[k++]);
		}
		for(int i=0;i<x.size();i++){
			ans[x[i]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' '; 
	}
	return 0;
} 


