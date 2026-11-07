#include<bits/stdc++.h>
using namespace std;
long long a[100000000];
char c[200010];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	
	long long n;
	cin>>n;
	string s = "";
	long long ans = 0;
	bool flagc = true,flaga = true,flag = false;
	for(long long i = 0; i < n; i ++){
		cin>>a[i]>>c[i];
		if(i >= 1 && c[i] != c[i - 1]) flagc = false;
		if(i >= 1 && a[i] != a[i - 1]) flaga = false;
		for(long long j = 0; j < a[i]; j ++){
			s += c[i];
		}
	}
	if(flagc == true){
		flag = true;
		cout<<0;
	}
	if(flaga == true){
		flag = true;
		for(long long i = 0; i < n; i ++){
			if(n % 2 == 0 && i >= n / 2){
				if(c[i] != c[n - i - 1]) ans += a[i];
			}else if(n % 2 != 0 && i > n / 2){
				if(c[i] != c[n - i - 1]) ans += a[i];
			}
		}
		cout<<ans;
	}
	if(flag == false){
		for(long long i = 0; i < s.size() / 2; i ++){
			if(s[i] != s[s.size() - i - 1]) ans ++;
		}
		cout<<ans;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
