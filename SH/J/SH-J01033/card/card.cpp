#include<iostream>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;cin>>m>>n;
	int a[m+10]={0};
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	return 0;
}
