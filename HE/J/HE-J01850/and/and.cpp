#include<bits/stdc++.h>
using namespace std;
int t[200001][31]={{0}};
int main(){
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,bj[200001]={0},m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long a;
		cin>>a;
		int j=0;
		while(a){
			if(a%2){
				t[i][j]++;
			}
			a/=2;
			j++;
		}
	}
	long long ans=0;
	for(int i=30;i>=0;i--){
		ans*=2;
		long long al=0;
		for(int j=0;j<n;j++){
			if(bj[j])continue;
			al+=t[j][i];
		}
		if(al<m){
			continue;
		}
		for(int j=0;j<n;j++){
			if(bj[j])continue;
			bj[j]=!t[j][i];
		}
		ans+=1;
	}
	cout<<ans;
	return 0;
} 
