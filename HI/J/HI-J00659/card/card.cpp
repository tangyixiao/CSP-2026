#include<bits/stdc++.h>
using namespace std;
int n,m,card[500001],table[200001],cnt[200001];

void game()
{
	int i=1;
	while(card[n] != 0){
		for(int k=1;k<=i;k++){
			if(table[k] == card[i]){
				int c=k+1;
				while(table[c] != 0)
					table[c]=0,c++;
			}
			else table[i]=card[i];
		}
	}
	for(int k=1;k<=n;k++)
		if(table[k] != 0) cnt[table[k]]++;
}

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&card[i]);
	for(int i=1;i<=n;i++) game();
	for(int i=1;i<=m;i++)
		printf("%d",cnt[i]);
	return 0;
}
