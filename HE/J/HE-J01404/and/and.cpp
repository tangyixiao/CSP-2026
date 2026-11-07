#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+1+n);
	s=a[n];
	m--;
	n--;
	while(m>0){
		s&=a[n];
		m--;
		n--;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
