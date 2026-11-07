#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
const int MAXM=3e5+5;
int cards[MAXN],desk[MAXN];
int cnt[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>cards[i];
	for(int i=1;i<=n;i++){
		int tt=1;
		for(int j=i;j<=n;j++){
			for(int k=0;k<tt;k++)
				if(desk[k]==cards[j]){
					tt=k;
					break;
				}
			desk[tt++]=cards[j];
		}
		for(int j=0;j<tt;j++)
			cnt[desk[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<' ';
	cout<<'\n';
	return 0;
}