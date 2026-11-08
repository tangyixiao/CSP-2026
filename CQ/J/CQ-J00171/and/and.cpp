#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>m>>n;
	int yu[m+1];
	for(int i=1;i<=m;i++){
		scanf("%d",&yu[i]);
	}
	sort(yu+1,yu+1+m);
	cout<<yu[m+1-n];
}
