#include<bits/stdc++.h>
using namespace std;
int m,n;
const int N=200005;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>m>>n;
	for(int i=1;i<=m;i++) scanf("%d",&a[i]);
	cout<<a[m];
	return 0; 
}