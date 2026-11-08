#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long card[100001],cnt[100001],n,m;
	cin>>n>>m;
	long long num=0;
	for(long long i=0;i<n;i++){
		cin>>card[i];
		for(int j=1;j<=m;j++){
			if(card[i]==j){
				cnt[j]++;
			}
		}
		num++;
	}
	cnt[num-1]=n;
	for(long long i=0;i<n;i++){
		cout<<cnt[i]<<" ";
	}
	
	
	
	return 0;
}

