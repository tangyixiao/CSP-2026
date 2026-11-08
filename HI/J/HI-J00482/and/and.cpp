#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int b[n+5];
	for(int i=0;i<n;i++) cin >> b[i];
	sort(b,b+n+1,cmp);
	cout << b[m-1];
	return 0;
} 
