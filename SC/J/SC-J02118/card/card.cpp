#include<bits/stdc++.h>
using namespace std;
int a[5000005],f[3000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	queue<int> d,b;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++){
		for (int j = i;j <= n;j++){
			d.push(a[j]);
		}
		int h = d.front();
		int g = i,ans=0;
		while (!d.empty()){
			for (int j = g+1;j <= n;j++){
				if (h == a[j]){
					for (int z = g;z < j;z++){
						d.pop();
						ans++;
					}
					g = j;
				}
			}
			b.push(d.front());
			d.pop();
			ans++;
			h = d.front();
			g = ans+i;
		}
		while(!b.empty()){
			f[b.front()]++;
			b.pop();
		}
	}
	for (int i = 1;i <= m;i++){
		cout << f[i] << ' ';
	}
	return 0;
}