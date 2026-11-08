#include<bits/stdc++.h>
using namespace std;
int c,c1,a[99999];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>c>>c1;
	for(int i=0;i<c;i++)cin>>a[i];
	sort(a,a+c);
	cout<<a[c1];
	return 0;
}	
