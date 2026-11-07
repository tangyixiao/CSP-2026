#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans = 0;
	cin>>n;
	vector<long long> N(n),N1(n);
	vector<char> C(n),C1(n);
	for (int i = 0;i < n;i++){
		cin>>N[i]>>C[i];
	}
	for (int i = 1;i < n;i++){
		if (C[i] == C[i - 1]){
			C[i - 1] = ' ';
			N[i] += N[i - 1];
			N[i - 1] = 0;
		}
	}
	for (int i = 0,j = 0;i < n;i++){
		while (N[i] == 0) ans++,i++;
		C1[j] = C[i];
		N1[j] = N[i];
		j++;
	}
	n -= ans;
	ans = 0;
	for (int i = 0;i < n / 2;i++){
		if (C1[i] != C1[n - i - 1]){
			if (N1[i] == N1[n - i - 1]){
				ans += N1[i];
				C1[n - i - 1] = C1[i];
			}else{
				if (N1[i] > N1[n - i - 1]){
					ans += (N1[i] - N1[n - i - 1]) * 2;
					N1[i] = N1[n - i - 1];
					N1[i + 1] += (N1[i] - N1[n - i - 1]);
					C1[i] = C1[n - i - 1];
				}else{
					ans += (N1[n - i - 1] - N1[i]) * 2;
					N1[n - i - 1] = N1[i];
					N1[n - i - 2] += (N1[n - i - 1] - N1[i]);
					C1[n - i - 1] = C1[i];
				}
			}
		}else if (N1[i] != N1[n - i - 1]){
			if (N1[i] > N1[n - i - 1]){
				ans += (N1[i] - N1[n - i - 1]);
				N1[i] = N1[n - i - 1];
				N1[i + 1] += (N1[i] - N1[n - i - 1]);
			}else{
				ans += (N1[n - i - 1] - N1[i]);
				N1[n - i - 1] = N1[i];
				N1[n - i - 2] += (N1[n - i - 1] - N1[i]);
			}
		}
	}
	cout<<ans;
	return 0;
}