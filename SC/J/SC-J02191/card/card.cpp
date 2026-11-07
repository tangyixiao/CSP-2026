#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+5;
int n, m, a[N], appeared[N]={0}, ans[N];
stack<int> cards;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(int turn=1; turn<=n; turn++){
		while(!cards.empty()) cards.pop();
		for(int i=1; i<=m; i++) appeared[i]=0;
		for(int i=turn; i<=n; i++){
			if(appeared[a[i]]){
				while(cards.top()!=a[i]){
					appeared[cards.top()]--;
					cards.pop();
				}
				appeared[cards.top()]--;
				cards.pop();
			}
			cards.push(a[i]);
			appeared[a[i]]++;
		}
		for(int i=1; i<=m; i++){
			if(appeared[i]) ans[i]++;
		}
	}
	for(int i=1; i<=m; i++)
		printf("%d ", ans[i]);
	return 0;
}