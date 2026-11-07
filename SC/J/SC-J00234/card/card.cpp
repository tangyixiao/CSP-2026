#include<bits/stdc++.h>
using namespace std;
int a[5000001];
int t[3000001];
int p[5000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int p1=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=p1;k++){
				if(p[k]==a[j]){
					p1=k-1;
				}
			}
			p[++p1]=a[j];
		}
		for(int j=1;j<=p1;j++){
			t[p[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}