#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	string a[n+1],c[n+1][n+1];
	int b[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int s=1;s<=n;s++){
			c[i][s]+=a[s];
		}
	}
	for(int i=1;i<=n;i++){
	    int t=1;
		for(int j=1;j<=n;j++){
			if(c[i][j]=="t"){
				b[t]+=1;
				t++;
			}
			else{
				t++;
			}
	    }
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<"  ";
	}
}