#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	
	int n,m;
	cin>>n>>m;
	vector<int> cards(n);
	for(int& i:cards){
		cin>>i;
	}
	vector<int> ans(m+1);
	vector<int> hash(m+1,0);
	int head;
	for(int i=0;i<n;i++){
		for(int& i:hash){
			i=0;
		}
		head=i;
		for(int j=i;j<n;j++){
			
			if(hash[j]){
				for(;head<j;head++){
					hash[cards[head]]=max(hash[cards[head]]-1,0);
					ans[cards[head]]=max(ans[cards[head]]-1,0);;
				}
			}
			hash[cards[j]]++;
			ans[cards[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}