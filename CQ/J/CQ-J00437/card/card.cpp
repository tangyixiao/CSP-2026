#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
    int a[n+1],x[m+1];
    for (int i=1;i<=n;i++){
    	cin >> a[i];
    	x[a[i]]=i;
	}
	int b[n+1][n+1];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			b[i][j]=0;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			b[i][j]=i;
		}
	}
	int c[m+1],d[m+1];
	for (int i=1;i<=n;i++){
		c[a[i]]++;
		if (c[a[i]]>1){
			for (int k=1;k<=d[a[i]];k++){
				if(b[k][d[a[i]]]!=0){
			        for (int j=d[a[i]];j<i;j++){
				        b[k][j]=0;
			        } 
			    }
			}
		}
		c[a[i]]=1;
		d[a[i]]=i;
	}
	for (int i=1;i<=m;i++){
		int sum=0;
		for (int j=1;j<=n;j++){
			if(b[j][x[i]]!=0){
				sum++;
			}
			
		}
		cout << sum <<' ';
	}
}
