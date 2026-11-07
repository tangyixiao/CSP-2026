#include<bits/stdc++.h>
using namespace std;
const int N=500005,M=300005;
int n,m;
int shark[M];
int glf[N];
int main(){

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>glf[a];
	}
	int cnt=0;
	for(int o=0;o<n-1;o++){
		for(int i=1;i<=n;i++){
			if(shark[glf[i+o]]==0) shark[glf[i+o]]=i;
			if(shark[glf[i+o]]!=0){
				for(int p=shark[glf[i+o]];p<=m;p++){
					shark[p]=0;
				}
			} 
		}
		for(int p=1;p<=m;p++){
			if(shark[p]==o){
				cnt++;
			}
		}
		cout<<cnt<<" ";
		cnt=0;	
	}

	return 0;
}