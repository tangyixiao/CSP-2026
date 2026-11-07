#include<bits/stdc++.h>
using namespace std;
int n,m;
int dt[300005],xt[300005],p[500005];
int a[5005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	int o = 0;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		o = 0;
		for(int j = i;j <= n;j++){
			if(xt[a[j]]){
				for(int c = p[a[j]];c <= o;c++){
					xt[c] = 0;
				}
				o = p[a[j]];
				xt[a[j]] = 1;
			}else{
				o++;
				p[a[j]] = o;
				xt[a[j]] = 1;
			}
			cout << xt[3] << ' ' ;
		}
		for(int j = 1;j <= m;j++){
			cout << xt[j] << ' ';
			dt[j] += xt[j];
			xt[j] = 0;
		}
		cout << endl;
	}
	for(int i = 1;i <= m;i++){
		cout << dt[i] << ' ';
	}
	return 0;
}