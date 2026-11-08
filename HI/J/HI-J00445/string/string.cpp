#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if(n==1){
		cout << 0;
		return 0;
	}
	
	if(n==2){
		long long as,bs;
		string a,b;
		cin >> as;
		cin >> a;
		cin >> bs;
		cin >> b;
		if(a==b){
			cout << 0;
		}else{
			cout << 1;
		}
		
		return 0;
	}
	return 0;
}
