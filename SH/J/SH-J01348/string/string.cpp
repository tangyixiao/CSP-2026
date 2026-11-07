#include <bits/stdc++.h>
using namespace std;
string tot;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	long long num = 0;
	for(int i = 1;i <= n;i++){
		long long a;
		string c;
		cin >> a >> c;
		for(long long j = 0;j <= a;j++){
			tot += c;
		}
		num += a; 
	}
	string new_tot = tot;
	reverse(new_tot.begin(),new_tot.end());
	long long cnt = 0;
	for(long long i = 0;i <= tot.size();i++){
		if(tot[i] == new_tot[i]){
			cnt++;
		}
	}
	if(cnt > 0){
			cout << num - cnt;
	}else{
		cout << cnt;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
