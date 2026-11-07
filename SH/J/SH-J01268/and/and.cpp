#include<bits/stdc++.h>
using namespace std;
int a,b,c,ans,d[10086];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c;
		d[i]=c;
	}
	sort(d+1,d+1+a);
	cout<<d[3];
return 0;
}
