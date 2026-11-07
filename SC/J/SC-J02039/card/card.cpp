#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],cnti[500010];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
		for(int i = 1; i <= n;i ++){
			for(int j = i;j <= n; j ++){
				b[j] = a[j];
				ans++;
				cnt1[b[j]++;
				if(cnt1[b[j]] > 1) 
				{
					for(int z = 1;z <= ans;z ++){
						if(b[z] == a[z]){
							b[z]= 0;
							for(int p = z;p <= ans; p ++){
								b[p] = 0;
							}
							break;
						}
					}
				}
		}
		for(int j = 1;j <= n;j ++){
			if(cnt1[j] > 0){
			}
				cout << cnt[i]<<"";
			}
		}
	}

	return 0;	
}
