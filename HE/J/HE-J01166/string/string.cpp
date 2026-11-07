#include <bits/stdc++.h>
using namespace std;
int n;
string s = "";
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;i++){
		long long t;
		string c;
		cin >> t >> c;
		for(long long i=1;i<=t;i++){
			s+=c; 
		} 
	}
	int x=s.size()-1,cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[x]){
			cnt++;
		}
		x--;
	}
	cout << cnt/2;
    return 0;
}
