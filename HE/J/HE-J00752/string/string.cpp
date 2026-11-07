#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string a;
	for (int i = 1;i <= n;i++){
		int b;
		cin >> b;
		string d;
		cin >> d;
		a += d;
	}
	int ans=0;
	for (int i = 0;i < a.size()/2;i++){
		if (a[i] == a[a.size()-i]){
			ans+=0;
		}
		else{
			ans++;
		}
	}
	cout << ans;
	return 0;
	
}
