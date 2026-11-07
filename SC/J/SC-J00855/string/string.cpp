#include<bits/stdc++.h>
#define int long long

using namespace std;

int a[200010];
int sum[200010];
char c[200010];
int n;

string s;
void slove1(){
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= a[i];j ++){
			s += c[i];
		}
	} 
	int len = sum[n], ans = 0;
	for(int i = 0;i < len / 2;i ++){
		if(s[i] != s[len - i - 1]) ans ++;
	}
	cout << ans;
	return;
}

void slove2(){
	int j = n, ans = 0, R = sum[n] + 1;
	for(int i = 1;i <= n;i ++){
		if(i >= j) break;
		int len = sum[i] - sum[i - 1];
		if(R - len > sum[j - 1]){//包含在j内 
			if(c[i] != c[j]) ans += len;
			R -= sum[i];
			R --;
			if(R == sum[j - 1]) j --;
//			cout << "i!!" << i << '\n';
		}else{
			if(c[i] != c[j]) ans += R - sum[i];
			j --;
			while(sum[j] >= R - len){
				if(c[i] != c[j]) ans += sum[j + 1] - sum[j];
				j --;
			}
			if(c[i] == c[j]) ans += sum[j] - (sum[n] - sum[i]);
			R -= len;
			R --;
			if(R == sum[j - 1]) j --;
		}
	//	cout << ans << ' ';
	}
	cout << ans;
	return;
}

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> a[i] >> c[i];
		sum[i] = sum[i - 1] + a[i];
	} 
	if(sum[n] <= 1000000000){
		slove1();
		return 0;
	}
	else{
		slove2();
		return 0;
	}
	
	return 0;
}