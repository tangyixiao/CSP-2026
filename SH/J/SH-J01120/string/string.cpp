#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long t;
	cin >> t;
	long long ans = 0;
	string k[1000005];
	long long sum = 0;
	while(t--){
		long long m;
		string s;
		cin >> m;
		cin >> s;
		for(int i=1;i<=m;i++){
			sum++;
			k[sum] = s;
		}
		ans += m;
	}
	long long cnt = 0;
	long long i = 1 , j = ans;
	while(i != j){
		if(k[i] != k[j]){
			cnt++;
			i++;
			j--;
		}else{
			i++;
			j--;
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
