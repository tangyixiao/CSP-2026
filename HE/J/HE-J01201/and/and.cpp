#include<bits/stdc++.h>
using namespace std;
int b[100000];
int c[100][1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a;
	cin>>n>>a;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int d=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		    c[i][j]=b[i]&b[j];
	    }
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		    d=max(d,c[i][j]);
	    }
	}
	cout<<d;
	return 0;
}
