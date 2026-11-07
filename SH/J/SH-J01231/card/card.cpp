#include<bits/stdc++.h>
using namespace std;
int l[500000+1];
int main ( ){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >>m;
	for (int i=0; i<n; i++ ){
		cin >>l[i];
	}
	int ans[m+1];
	int sum[m+1];
	int ln[m+1];
	for ( int i=0; i<=m; i++){
		ans[i] =0;
		sum[i]=0;
		ln[i]=-1;
	}
	for (int i=0; i<n; i++){
		sum[l[i]]++;
		ln[l[i]] = i;
	}
	for (int i=0; i<=m; i++ ){
		for (int j=ln[i]; j<n; j++){
			if (j == ln[l[j]]){
				ans[l[j]] += sum[i];
			}
			else{
				ans[l[j]]+= sum[i];
				j = ln[l[j]];
			}
		}
	}
	for (int i=1; i<=m; i++){
		cout <<ans[i];
		if (i == m){
			cout <<endl;
			
		}
		else{
			cout << ' ';
		}
	}
	
} 
