#include<bits/stdc++.h>
using namespace std;
long long n,m;
vector<long long> cards;
vector<long long> out;
long long cnt[100010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		cards.push_back(a);
	}
	for(int i=0;i<n;i++){
		out.clear();
		for(int j=i;j<n;j++){
			for(int k=0;k<j-i;k++){
				if(cards[j]==out[k]){
					for(int q=k;q<=j-i;q++){
						out[q]=0;
					}
				}
			}out.push_back(cards[j]);
		}for(int j=0;j<n-i;j++){
			cnt[out[j]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
