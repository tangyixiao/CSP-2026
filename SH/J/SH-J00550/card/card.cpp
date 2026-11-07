#include<bits/stdc++.h>
using namespace std;
long long n,m,s[800000],t[800000],ss[800000],e[800000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ss[j]=s[j];
			for(int k=i;k<j;k++){
				if(ss[k]==ss[j]){
					ss[k]=-1;
					for(int p=k;p<j;p++){
						ss[p]=-1;
					}
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(ss[j]>=0){
				e[ss[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<e[i]<<" ";
	}
	return 0;
} 
