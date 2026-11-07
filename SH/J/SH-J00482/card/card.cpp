#include<bits/stdc++.h>
using namespace std;
int n,m;
int ni[500005];
int last_mi[300005];
int mi_cnts[300005];
vector<int> adds;
vector<int> bf;
int cs=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&ni[i]);
	}
	for(int i=n;i>=1;i--){
		if(last_mi[ni[i]]==0){
			last_mi[ni[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(last_mi[ni[i-1]]<=i-1&&i>1){
			bf.push_back(ni[i-1]);
			cs++;
		}
		else{
			for(int j=0;j<adds.size();j++){
				mi_cnts[adds[j]]+=cs;
			}
			for(int j=0;j<bf.size();j++){
				mi_cnts[bf[j]]-=cs-j;
			}
			adds.clear();bf.clear();cs=0;
			for(int j=i;j<=n;j++){
				if(last_mi[ni[j]]>j){
					j=last_mi[ni[j]];
				}
				mi_cnts[ni[j]]++;
				adds.push_back(ni[j]);
			}
		}
	}
	for(int j=0;j<adds.size();j++){
		mi_cnts[adds[j]]+=cs;
	}
	for(int j=0;j<bf.size();j++){
		mi_cnts[adds[j]]-=cs-j;
	}
	for(int i=1;i<=m;i++){
		printf("%d ",mi_cnts[i]);
	}
    return 0;
}
