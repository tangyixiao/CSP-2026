#include<bits/stdc++.h>
using namespace std;
long long n,ans,a[200010];
char c[200010];
string S;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		string Str;
		for (int j=1;j<=a[i];j++){
			Str+=c[i]; 
		}
		S+=Str;
	}
	S=" "+S;
	for (int i=1;i<S.size()/2;i++){
		if (S[i]!=S[S.size()-i]){
			ans++;
		}
	} 
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
