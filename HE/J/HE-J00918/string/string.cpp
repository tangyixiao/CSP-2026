#include<bits/stdc++.h>
using namespace std;
string s;
int n,a[1000000],ans = 0;;
char c[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i+1]){
			ans++;
		}
	}
	if(ans==n)cout<<0;
	return 0;
}
