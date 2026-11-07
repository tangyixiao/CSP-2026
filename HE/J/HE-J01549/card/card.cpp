#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<i;j++){
			if(a[0]==a[i]){
				cout<<1; 
			}
		}
	}
	int p=0;
	for(int i=1;i<=m;i++){
		cout<<p<<" ";
	}
}
