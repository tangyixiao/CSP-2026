#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen(and.in,"r",stdin);
    freopen(and.out,"w",stdout);
    int n,m;
    cin>>n>>m;
    int a[1001];
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int c[101][101];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			c[i][j]=a[i]&a[j];
		} 
	}
	int b=-1;
    for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(b<c[i][j]){
				b=c[i][j];
			}
		} 
	}
    cout<<b;
    return 0;
    
}

