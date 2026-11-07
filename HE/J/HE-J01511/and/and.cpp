#include<bits/stdc++.h>
using namespace std;
int s[10000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>s[i];
	}
	cout<<s[a];
}
