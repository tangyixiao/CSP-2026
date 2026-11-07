#include<bits/stdc++.h>
using namespace std;

int m,n,cr[100005],teil=n,cnt[100005],head=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>cr[i];
	}
	for(int i=1;i<=n;i++){
		head = i;
		for(int j=head;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				if(cr[j] == cr[k]){
					head = k;
				}
			}
		}
		for(int j=head;j<=n;j++){
			cnt[cr[j]]++;
		}
	}
	for(int i=1;i<=n;i++){
		if(cnt[i]){
			cout<<cnt[i]<<" ";
		}
	}
	return 0;
}