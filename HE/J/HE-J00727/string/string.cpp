#include <bits/stdc++.h>
using namespace std;
long long n;
long long m;
string x;
string s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;	
	while(n--){
		cin >> m >> x;
		for(int i=1;i<=m;i++){
			s+=x;
		}
	}
	for(int i=0;i<s.size()/2;i++){
	   	long long l=s[i];
	    	long long r=s[s.size()-1-i];
			if(l!=r){
				ans++;
			}else{
				continue;
			}
    	}
	cout << ans;
    return 0;
}
