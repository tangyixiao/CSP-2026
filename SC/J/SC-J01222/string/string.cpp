#include<bits/stdc++.h>
using namespace std;
char s[200005][1000000005];
int z[200005];
int x=0,q=0;
char y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,f=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		z[i]=x;
		for(int j=0;j<x;j++){
			s[i][j]=y;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<z[i];j++){
			if(s[i][j]==s[n-i][z[i]-j]){
				continue;
		}else{
			q++;
		}
	}	
	}cout<<q;
	return 0;
} 