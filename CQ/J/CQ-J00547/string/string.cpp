#include <bits/stdc++.h>
using namespace std;

string s;
char c;
long long a,n,l,x,y,ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	s=" "+s;
	for(int i=1 ; i<=n  ;i++){
		cin>>a>>c;
		l+=a;
		for(int j=1 ; j<=a ; j++){
			s+=c;
		}
	}
	
	x=1;y=l;
	while(x<=l/2){
		if(s[x]!=s[y]){
			ans++;
		}
		x++;
		y--;
	}
	
	cout<<ans;
	
	return 0;
} 
