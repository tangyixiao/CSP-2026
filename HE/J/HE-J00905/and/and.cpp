#include<bits/stdc++.h>
using namespace std;

int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int w;
	cin>>w;
	int x[w+1],s;
	cin>>s;
	int maxn=0;
	for(int i=1;i<=w;i++){
		cin>>x[i];
	}
	sort(x,x+w);
	cout<<x[w/2];


	return 0;
}
