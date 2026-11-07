#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n,res=0;
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s=s+c;
		}
	}
	for(int i=0;i*2<s.size();i++){
		int j=s.size()-i-1;
		if (s[i]!=s[j]) res++;
	}
	cout<<res;
	
	return 0;
}
