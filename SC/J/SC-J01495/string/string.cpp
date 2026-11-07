#include<bits/stdc++.h>
using namespace std;

int n, ans;
int a;
string s;
long long x;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		char c;
		cin>>a>>c;
		x += a;
		for(int j = 1;j <= a;j++){
			s+=c;
		}
	}
	x--;
//	cout<<s<<endl;
	for(int i = 0;i < x;i++){
		if(s[i] != s[x]+1-i){
			ans++;
		}
	}
	
	if((x+1) % 2 != 0){
		ans--;
	}
	cout<<ans;
	return 0;
} 