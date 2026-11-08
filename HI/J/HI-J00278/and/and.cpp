#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int s[a+10];
	for(int i=0;i<a;i++){
		cin>>s[i];
	}sort(s-1,s+a);
	cout<<s[a-b];
	return 0;
}
