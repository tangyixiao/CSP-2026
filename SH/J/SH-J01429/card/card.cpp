#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int a[n+1],cnt[m+1]={},dsktop[n+1];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		if (!(a[i] in dsktop)){
			dsktop.append(a[i]);
		}
		else if(a[i] in dsktop){
			int indx=dsktop.index(a[i]); 
		}
	}
	for (int i=1;1<=m;i++){
		cout<<cnt[i];
	} 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
