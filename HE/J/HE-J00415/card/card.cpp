#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,a[N],t[N],s[M],m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		if(t[a[i]]==1){
			for(int j=1;j<=n;j++){
				if(a[i]==a[j]&&a[i]!=0){
					for(int z=j;z<i;z++){
						t[a[z]]=0;
						a[z]=0;
					}
				} 
			}
		}
		t[a[i]]=1;
		if(a[i]<=m)s[a[i]]++;
	}for(int i=1;i<=m;i++)cout<<s[i]<<' ';
	return 0;
}
