#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string zfc;
	for(int i = 0;i < n;i ++){
		int a;
		char b;
		cin >> a >> b;
		for(int j = 0;j < a;j ++){
			zfc += b; 
		}
	}
	string a = zfc.substr(0,(n+1)/2-1);
	string b;
	for(int i = a.length();i > 0;i --){
		b += a[i]; 
	}
	if(a == b){
		cout << 0;
	}
	else{
		int minn = INT_MAX;
		int x,y,z;
		for(int i = 0;i < zfc.length() + 1 / 2;i ++){
			int cnt = 1;
			string c = zfc.substr(0,(n+1)/2-1);
			string d;
			for(int j = c.length();j > 0;j --){
				c += d[j];
			}
			string e = c + zfc[(n+1)/2] + d;
			for(int j = 0;j < e.length();j ++){
				if(c[j] == zfc[j]){
					cnt ++;
				}
			}
			minn = min(minn,cnt);
		} 
		cout << minn;
	}
	return 0; 
}
