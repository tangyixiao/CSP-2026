#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,a[1000],m,s[1000],j=1,b[1000];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(j<n){
		for(int i=1;i<=n;i++){
			b[i]=a[i];
		}
		for(int i=j;i<=n;i++){
			for(int k=i+1;k<=n;k++){
				if(b[i]==b[k]){
					for(int l=i;i<=j;l++)b[l]=0;
				}
			}
		}
		for(int i=j;i<=n;i++){
			if(b[i]!=0)s[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i];
	}
}
