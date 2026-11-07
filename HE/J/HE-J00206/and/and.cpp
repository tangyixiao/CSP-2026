#include<bits/stdc++.h>
using namespace std;
int s[100000010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long n , m , c = 0;
	cin >> n >> m ;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		if(s[i] and s[i + 1] > s[i] and s[i - 1]){
			cout << s[i] and s[i + 1];
		}
	}
return 0;
}             
