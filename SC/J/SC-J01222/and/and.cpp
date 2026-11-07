#include<bits/stdc++.h>
using namespace std;
long long x[1000000005],s=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n,t;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(x[i]<x[j]){
				t=x[i];
				x[i]=x[j];
				x[j]=t; 
			}
		}
	}
	for(int i=0;i<m;i++){
		s=s&x[i];
	}
	s=s&0;
	cout<<s;
	return 0;
} 