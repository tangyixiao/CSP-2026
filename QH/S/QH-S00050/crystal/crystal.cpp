#include<bits/stdc++.h>
using namespace std;
int n,m,i;
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	int a[n];
	vector<int> s;
	for(i=0;i<n;i++){
		cin>>a[i];
		int p=0;	
		int k=i-1;
		int x=0;
		if(a[i]==a[k]){
			x++;
			s[p]=x;
		}else{
			while(k=0){
				k-1;
				if(a[i]==a[k]){
					x++;
					s[p]=x;
				}
			}
		}
		p+1;
	}
	int g=0,j,c=0;
	while(c=m){
		c++;
		if(g>s[c]){
			g=s[c];
		}
	}
	cout<<g;
	return 0;
} 
