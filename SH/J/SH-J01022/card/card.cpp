#include <bits/stdc++.h>

using namespace std;


int n,m;
int card[500005]={};
int cmp[500005]={},de[500005]={};
int ans[500005]={};

int play(int a){
	cmp[500005]={},de[500005]={};
	for(int i=a;i<=n;i++){
		cmp[card[i]]++;
		if(cmp[card[i]]==2){
			for(int j=de[card[i]];j<i;j++){
				if(cmp[card[j]]>0) cmp[card[j]]--;
			}
		}
		de[card[i]]=i;
	}
	return 0;
}

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		play(i);
		for (int j=1;j<=m;j++){
			if(cmp[j]==1)ans[j]++;
			cmp[j]=0;
		}
	}
	for (int j=1;j<=m;j++){
		cout<<ans[j]<<" ";
	}
	return 0;
}
