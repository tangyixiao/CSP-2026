#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[500010],vp[300010];
bool visc[300010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int x=1;x<=n;x++){
		vector<int> card;
		for (int i=1;i<=m;i++){
			vp[i]=-1;
			visc[i]=false;
		}
		for (int i=x;i<=n;i++){
			if (visc[a[i]]){
				while (card.size()>=vp[a[i]]){
					visc[card[card.size()-1]]=false;
					vp[card[card.size()-1]]=-1;
					card.pop_back();
				}
			}
			card.push_back(a[i]);
			visc[a[i]]=true;
			vp[a[i]]=card.size();
		}
		for (int j=0;j<card.size();j++){
			ans[card[j]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	cout << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
