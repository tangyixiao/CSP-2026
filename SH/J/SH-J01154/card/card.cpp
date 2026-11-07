#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],x[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)cin >> a[i];
	for(int i = 1;i <= n;i++){
		int tnt = 0;
		int s[500005];
		memset(s,0,sizeof(s));
		for(int j = i;j <= n;j++){
			s[++tnt] = a[j];
			for(int k = 1;k <= tnt;k++){
				if(s[tnt] == s[k]){
					tnt = k;
					break;
				}
			}
		}
		for(int j = 1;j <= tnt;j++){
			x[s[j]]++;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << x[i] << ' ';
	}
	return 0;
}
