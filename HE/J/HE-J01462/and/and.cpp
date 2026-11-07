#include<bits/stdc++.h>
using namespace std;
int n,m;
long long cnt;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end(),cmp);
	cnt=a[0];
	for(int i=1;i<m;i++){
		cnt=cnt&a[i];
	}
	printf("%d",cnt);
	return 0;
}
