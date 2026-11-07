#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,ch=getchar();
	while(!isdigit(ch)) ch=getchar();
	while(isdigit(ch)) x=x*10+ch-'0',ch=getchar();
	return x;
}
const int N=200005;
int n,m,a[N];
int ans;
bool bit[35][N],cur[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		for(int j=1;j<=30;j++)
			if(a[i]>>(j-1)&1) bit[j][i]=true;
	}
	for(int i=1;i<=n;i++) cur[i]=true;
	for(int j=30;j>=1;j--){
		int cnt=0;
		for(int i=1;i<=n;i++)
			if(cur[i]&&bit[j][i]) cnt++;
		if(cnt<m) continue;
		ans+=(1<<(j-1));
		for(int i=1;i<=n;i++) cur[i]&=bit[j][i];
	}
	cout<<ans;
	return 0;
}
/*
F1 2026
            | Spint Pole Position | Sprint Winner  | Pole Position  | Winner
Australia   | ¹öÄ¾                | ¹öÄ¾           | George Russell | George Russell 
China       | George Russell      | George Russell | Kimi Antonelli | Kimi Antonelli
Japan       | ¹öÄ¾                | ¹öÄ¾           | Kimi Antonelli | Kimi Antonelli
Mimami      | Lando Norris        | Lando Norris   | Kimi Antonelli | Kimi Antonelli
Canada      | George Russell      | George Russell | George Russell | Kimi Antonelli
Monaco      | ¹öÄ¾                | ¹öÄ¾           | Kimi Antonelli | Kimi Antonelli
Barcelona   | ¹öÄ¾                | ¹öÄ¾           | George Russell | Lewis Hamilton
Austria     |                     |                | George Russell | George Russell
Britain     | Lewis Hamilton      | Kimi Antonelli | Kimi Antonelli | Charles Leclerc
Belgium     |                     |                | Kimi Antonelli | Kimi Antonelli
Hungary     |                     |                | Lando Norris   | Lando Norris
Netherland  |                     |                | Lando Norris   | Lando Norris
Italy       |                     |                | Pierre Gasly   | Kimi Antonelli
Spain       |                     |                | Lando Norris   | Kimi Antonelli
Azerbaijan  |                     |                | George Russell | George Russell
Barain      |                     |                | Max Verstappen | Max Verstappen
Singapore   | Max Verstappen      | Max Verstappen | Max Verstappen | Max Verstappen
US          |                     |                | Kimi Antonelli | Kimi Antonelli
*/
