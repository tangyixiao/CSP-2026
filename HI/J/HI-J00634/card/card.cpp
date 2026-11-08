#include<bits/stdc++.h>
using namespace std;
int a[500001];
int s[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool b[500001];
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0) b[a[j]]=1;
			else if(b[a[j]]==1){
				for(int l=1;l<=m;l++){
					b[l]=0;
				}
				b[a[j]]=1;
			} 
		}
		for(int k=1;k<=m;k++){
			if(b[k]==1) s[k]++;
		}
		for(int pl=1;pl<=m;pl++){
			b[pl]=0;
		}
	}
	for(int i=1;i<=m;i++) cout<<s[i]<<" ";
	return 0;
}
