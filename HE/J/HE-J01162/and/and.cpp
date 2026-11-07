#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200001],q=0,w=0,e=0,num,d;
	string b[200001];
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		while(a[i]!=0) {
			b[i]+=(a[i]%2);
			a[i]/2;	
		}
		sort(b[i].begin(),b[i].end());
		reverse(b[i].begin(),b[i].end());
		d=b[i].size();
		for(int j=0;i<d;j--){
			q+=int(pow(2,j));
		}
		b[i]=q;
		q=0;
	}
	cout<<b;
	fclose(stdin);
	fclose(stdin);
	return 0;
}
