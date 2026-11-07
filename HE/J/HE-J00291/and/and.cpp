#include<bits/stdc++.h>
using namespace std;
int m;
long long asd[200005];
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>asd[i];
	}
	sort(asd+1,asd+n+1,cmp);
	long long k;
	if(m==1){
		cout<<asd[1];
		return 0;
	}
	cout<<asd[m];
}
