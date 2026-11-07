#include<bits/stdc++.h>
using namespace std;
int n;
string a;
long long le;
long long num[2000005];
char ch[2000005];
bool check(char ch[]){
	for(int i = 2; i <= n; i++){
		if(ch[i] != ch[i-1]) return 0;
	}
	return 1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
    for	(int i = 1; i <= n; i++){
    	cin >> num[i] >> ch[i];
		
	}
	if(n == 1){
		cout << 0;
		return 0;
	}
	else if(check(ch) == 1){
		cout << 0;
		return 0;
	}
	else {
		for	(int i = 1; i <= n; i++){
    	
		for(int j = 1; j <= num[i]; j++){
			a += ch[i];
		}	
    	le += num[i];
	    }
		long long ans = 0;
		for(int i = 1; i <= le/2; i++){
			if(a[i] != a[n+1-i]){
				ans++;
			}
		}
		cout << ans;
		return 0;
	}
	
	return 0;
}