#include<bits/stdc++.h>
#define int  long long
using namespace std;
int c[100000000];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++)
		cin>>c[i];
	sort(c,c+a,cmp);
	int ans=c[0];
	for(int i=1;i<b;i++)
		ans&=c[i];
	cout<<ans;
    return 0;
}
