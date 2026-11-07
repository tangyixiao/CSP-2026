#include<bits/stdc++.h>
using namespace std;
int n,m,card[500005],tim[500005];
int mp[300005];
bool check;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>card[i];
	for(int i=1;i<=n;i++){
		int z=1;
		for(int j=i;j<=n;j++){
			tim[z]=card[j];
			check=0;
			for(int k=1;k<=z;k++){
				if(check) tim[k]=0;
				else if(tim[k]==card[j]) check=1;
			}
			z++;
		}
		for(int j=1;j<=z;j++){
			mp[tim[j]]++;
			tim[j]=0;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<mp[i]<<" ";
	return 0;
} 
