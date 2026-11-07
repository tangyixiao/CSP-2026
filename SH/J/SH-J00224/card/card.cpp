#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000010],k,b[100000010],c[3000010];
void game(int x){
	memset(b,0,sizeof(b));
	for(int i = x;i <= n;i++){
		int pos = 0;
		for(int j = 1;j <= k;j++)
			if(a[i] == b[j]){pos = j;break;}
		if(!pos)b[++k] = a[i];
		else{
			for(int j = k;j >= pos;j--)b[j] = 0;
			k = pos;b[++k] = a[i];
		}
	}
	for(int i = 1;i <= k;i++)c[b[i]]++;
	for(int i = 1;i <= k;i++)cout<<b[i]<<' ';
	cout<<k<<'\n';
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++)cin>>a[i];
	for(int i = 1;i <= n;i++){
		game(i);
	}
	for(int i = 1;i <= m;i++)cout<<c[i]<<' ';
	return 0;
}
