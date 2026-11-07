#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
long long tot; 
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i] >> c[i];
	for(int i = 1 ; i <= n ; i++) tot += a[i];
	int cur1 = 1 , cur2 = n;
	//维护cur1，cur2，表示目前枚举到的 数组a，c下标
	//维护cnt,表示目前枚举的小写字母个数的一半 
	//cout << tot << endl;
	
	long long cnt = 0;
	long long ans = 0;
	while(1 == 1){
		if(c[cur1] != c[cur2]){
			if(a[cur1] > a[cur2]){
				cnt += a[cur2];
				a[cur1] -= a[cur2];
				ans += a[cur2];
				a[cur2] = 0;
				cur2--;
			}
			else if(a[cur1] < a[cur2]){
				cnt += a[cur1];
				a[cur2] -= a[cur1];
				ans += a[cur1];
				a[cur1] = 0;
				cur1++;
			}
			else{
				cnt += a[cur1];
				ans += a[cur1];
				a[cur1] = a[cur2] = 0;
				cur1++;
				cur2--;
			}
		}
		else{
			if(a[cur1] > a[cur2]){
				cnt += a[cur2];
				a[cur1] -= a[cur2];
				a[cur2] = 0;
				cur2--;
			}
			else if(a[cur1] < a[cur2]){
				cnt += a[cur1];
				a[cur2] -= a[cur1];
				a[cur1] = 0;
				cur1++;
			}
			else{
				cnt += a[cur2];
				a[cur1] = a[cur2] = 0;
				cur1++;
				cur2--;
			}
		}
		//cout << ans << " " << cnt << " " << cur1 << " " << cur2 << endl;
		if(cnt == (tot + 1)/2) break;
		//if(cur1 == cur2) cout << "cur1=cur2:" << a[cur1] << endl;
		if(cur1 == cur2 && (a[cur1] == 0 || a[cur1] % 2 == 1)) break;
	}
	cout << ans;
	return 0;
	//期望得分：100pts 
}
