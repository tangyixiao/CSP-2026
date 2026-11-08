#include<bits/stdc++.h>
using namespace std;
long long pai[500999];
long long cs[304399];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>pai[i];
	}
	for(int i=1;i<=n;i++){
		string cp,cpp;
		for(int j=i;j<=n;j++){
			if(cp.find(char(pai[j]+48)  )==0  ){
				cp=cpp;
				cp+=char(pai[j]+48);
			}else{
				cp+=char(pai[j]+48);
			}
		}
		for(int j=0;j<cp.size();j++){
			cs[int(cp[j]-48)]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cs[i]<<" ";
	}
	return 0;
}
