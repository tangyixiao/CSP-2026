#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>m>>n;
	int x=0;
	for(int i=1;i<=m;i++){
		cin>>a[i];
		x++;
	}
	sort(a+1,a+m+1);
	cout<<a[m/2+1];
	fclose(stdin);fclose(stdout);
	return 0;
} 