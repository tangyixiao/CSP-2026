#include<bits/stdc++.h>
using namespace std;
const int N=5*10e5+10,M=3*10e5+10;
int a[N],x[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[a[i]]++;
	}for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;i++){
			if(a[i]==a[j]&&a[i]!=-1){
				for(int k=i+1;k<=j;k++){
					a[i]=-1;
				}
			}
		}for(int i=1;i<=n;i++){
			x[a[i]]++;
		}
	}sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		if(a[i]!=-1)  cout<<x[a[i]]<<" ";
	}return 0;
}
