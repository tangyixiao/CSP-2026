#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,L,cnt = 0,sa[50000];
	string sn[200010];
	string S = "0";
	cin >> n;
	for(int i =1;i<=n;i++){
		
		cin>>sa[i]>>sn[i];
		for(int j = 1;j<=sa[i];j++){
			S += sn[i];
		}
	}
	L = S.size();
	for(int i = 1;i*i<=L-1;i++){
		if(S[i] != S[L-i])cnt++;
	}
	cout << cnt;
	return 0;
}
