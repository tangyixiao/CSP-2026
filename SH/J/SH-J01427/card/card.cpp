#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[1000000];
	int vis[m + 1][2],r[m + 1];
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		vis[i][1] = 0;
		vis[i][0] = 0;
	}
	int w = 0;
	while(w < n){
		for (int i = w;i < n;i++){
			if (vis[a[i]][0] != 1){
				vis[a[i]][0] = 1;
				vis[a[i]][1] = i;
			}
			else if (vis[a[i]][0] == 1){
				for (int j = vis[a[i]][1] + 1;j < i;j++){
					vis[a[j]][0] = 0;
					vis[a[j]][1] = 0;
				}
			} 
		}
		for (int i = 0;i <= m;i++){
			if (vis[i][0] == 1){
				r[vis[i][0]]++;
			}
		}
		w++;
	}
	for (int i = 0;i < m;i++){
		cout << r[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
