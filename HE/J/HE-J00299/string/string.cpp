#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,ans,a[N];
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s;
		if(s.size()%2==0){
			ans=s.size()/2; 
		}
	}
	cout<<ans;
	return 0;
} 
