#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	int a=0,m=0
	long long cnt=0xFFFFFFFFFF;
	cin>>a>>m;
	long long b[a+5]={0};
	for(int i=0;i<a;i++) cin>>b[i];
	sort(b,b+a);
	for(int i=0;i<m;i++) cnt&=b[a-i-1];
	cout<<cnt;

	fclose(stdin);
	fclose(stdout);

	return 0;
}
