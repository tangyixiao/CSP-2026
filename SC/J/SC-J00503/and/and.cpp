#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	string s;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if((i+1)>=i){
			swap(s[i],s[i+1]);
		}
		cout<<s[m];
	}
	
}