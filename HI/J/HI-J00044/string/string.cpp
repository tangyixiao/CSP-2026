#include<bits/stdc++.h>
using namespace std;
int n, s[100];
string a[100];
int main(){
	 freopen("string.in","r",stdin);
	 freopen("string.out","w",stdout);
	 cin >> n;
	 for(int i = 1;i <= n; i++){
	 	cin >> s[i] >> a[i];
	 }
	sort(a,a+1);
	if(a[1] == a[n])cout << 0;
	
	 return 0;
}
