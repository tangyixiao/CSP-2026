#include<bits/stdc++.h>
using namespace std; 
long long n,a,b;
char c,d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cin>>a>>c;
	if(n==1){
		cout<<0;
		return 0;
	}
	cin>>b>>d;
	if(c==d)cout<<0;
	else cout<<min(a,b);
	return 0;
}
