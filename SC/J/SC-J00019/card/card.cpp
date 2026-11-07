#include<bits/stdc++.h>
using namespace std;
long long a[999999],b[999999];
map<int,int> c;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ant=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[a[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(c[j]>1){
				ant=j;
			}
		}
		for(int j=ant;j<=n;j++){
			b[a[j]]++;
		}
		for(int j=1;j<=m;j++){
			c[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}