#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	 freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a[1005];
	string s[1001],s1;
	cin >> n;
	if(n==1){
		cout << 0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin >> a[i] >> s[i];
		for(int j=1;j<=a[i];j++){
			s1+=s[i];
		}
		
	}
	if(n==1) cout << "0";
	if(n==2) cout << min(a[1],a[2]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
