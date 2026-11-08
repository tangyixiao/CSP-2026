#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],cnt[500010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//cout << "[promgram]Start." << endl;
	//cout << "[input]Start." <<endl;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//cout << "[input]End." << endl;
	//cout << "[game]All start." << endl;
	for(int i = 1; i <= n; i++) {
		//cout << "[game]Start(turns:" << i << ")." << endl;
		int gamemap[n - i + 10];
		for(int j = 1;j <= n - i + 10;j++){
			gamemap[j] = 0;
		}
		int c = 0;
		for(int j = i; j <= n; j++) {
			int flag = 0;
			for(int k = 1; k <= c; k++) {
				if(flag == 0) {
					if(gamemap[k] == a[j]){
						flag = k;
					}
				} else {
					gamemap[k] = 0;
				}
			}
			if(flag != 0){
				//cout << "[game]Out(" << flag << "to" << c << "by" << a[j] << ")." << endl;
				c = flag;
			}else{
				//cout << "[game]Put on(" << a[j] << ")." << endl;
				c++;
				gamemap[c] = a[j];
			}
			//cout << "[game]Now map:";
			for(int k = 1;k <= c;k++){
				//cout << gamemap[k] << ' ';
			}
			//cout << endl;
		}
		bool flag1[m + 5];
		for(int j = 1;j <= c;j++){
			if(flag1[gamemap[j]] != true){
				//cout << "[promgram]Add(" << gamemap[j] << ")." << endl;
				
				cnt[gamemap[j]]++;
				flag1[gamemap[j]] = true;
				//cout << "[promgram]Now" << gamemap[j] << "is" << cnt[gamemap[j]] << endl;
			}
		}
		//cout << "[game]End(turns:" << i << ")." << endl;
	}
	//cout << "[game]All End." << endl;
	//cout << "[output]Start." << endl << endl << endl;
	for(int i = 1;i <= m;i++){
		cout << cnt[i] << ' ';
	}
	//cout << endl << endl << endl;
	//cout << "[output]End." <<endl;
	//cout << "[promgram]End." << endl;
	return 0;
}

