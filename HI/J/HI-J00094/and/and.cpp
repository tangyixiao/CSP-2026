#include<bits/stdc++.h>
using namespace std;
int s[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n ;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>s[i];
	}
	cout<<s[m];
	fclose(stdin); fclose(stdout);
	return 0;
}
