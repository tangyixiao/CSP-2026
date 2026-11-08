#include<bits/stdc++.h>
using namespace std;
int s[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b,c=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>s[i];
}
	sort(s+1,s+a+1);
	cout<<s[a];

		return 0;
}
