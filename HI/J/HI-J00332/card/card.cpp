#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n,m,a[N],ans[N],wh[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	memset(wh,-1,sizeof(wh));
	for(int i = 1;i <= n;i++){
		vector<int> mo;
		memset(wh,-1,sizeof(wh));
		for(int j = i;j <= n;j++){
			if(wh[a[j]] == -1){
				mo.push_back(a[j]);
				wh[a[j]] = mo.size() - 1;
			}
			else{
				int sum = mo.size() - wh[a[j]] - 1;
				for(int k = 1;k <= sum;k++){
					wh[mo[mo.size() - 1]] = (-1);
					mo.pop_back();
				}
			}
		}
		for(int j = 0;j <= mo.size() - 1;j++){
			ans[mo[j]] ++;
			cout << mo[j] << " ";
		}
		cout << endl;
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
