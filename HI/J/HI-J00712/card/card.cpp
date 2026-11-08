#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int p=0;
	freopen("card1.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int cd[n]={};
	int ncd[n]={};
	int acd[n]={};
	for(int i=0;i<n;i++){
		cin>>cd[i];
		ncd[n]++;
	}
	for(int i=0;i<n;i++){
		ncd[i]--;
		for(int j=i;j<n;j++){
			if(cd[j]==cd[i]){
				p=j;
				break;
			}
		}
		if(i<p){
			ncd[i]++;
		}
		if(i=p){
			p=0;
		}
	}
	
}
