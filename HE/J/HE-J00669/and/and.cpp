#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout); 
	int n,m;
	cin>>n>>m;
	int a[n+2];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	cout<<a[m];
	return 0;
	fclose(stdin);
	fclose(stdout);
}
