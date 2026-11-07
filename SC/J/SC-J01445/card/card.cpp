#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int n, m, a[500005], d[300005], dm[300005];
int s[500005], pos1[300005];
bool flag =true;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	 cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(a[i] > a[i-1]) flag = false;
		pos1[a[i]] = max(pos1[a[i]], i);
	}
	if(flag == true){
		for(int i =1 ;i <= m;i++)
			cout << pos1[i] << endl;
	}
	else{
		for(int i = 1;i <= n;i++){
			int cnt = 0;
			memset(s, 0, sizeof s);
			memset(d, 0, sizeof d);
			for(int j = i;j <= n;j++){
				if(d[a[j]] >= 1){
					int pos = 0;
					for(int z = 1;z <= cnt;z++){
						if(s[z] == a[j]) {
							pos = z;
							break;
						}
					}
					for(int z= pos+1;z <= cnt;z++){
						d[s[z]]--;
						s[z] = 0;
					}
					cnt = pos;
				}
				else{
					d[a[j]]++;
					s[++cnt] = a[j];
				}
			}
			for(int i = 1;i <= cnt;i++)
				dm[s[i]]++;
		}
		for(int i = 1;i <= m;i++)
			cout << dm[i]<< " ";
	}
	return 0;
}