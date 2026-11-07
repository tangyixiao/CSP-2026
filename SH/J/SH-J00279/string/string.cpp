#include<bits/stdc++.h>
using namespace std;
string s;
int x;
char c;
long long cnt = 0,n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>x>>c;
		for(int j = 1;j <= x;j++){
			s += c;
		}
	}
	for(int l = 0,r = s.size() - 1;l < r;l++,r--){
		cnt += !(s[l] == s[r]);
	}
	cout<<cnt;
}
