#include<bits/stdc++.h>
using namespace std;
int n,s,ans;
string a;
char p;
int main(){
	freopen("string .in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>s;
		cin>>p;
		while(s--){
			a+=p;
		}
	}
	for(int i=0;i<=a.size()/2;i++){
		if(a[i]!=a[a.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}