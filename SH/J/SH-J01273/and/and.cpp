#include<bits/stdc++.h>
using namespace std;
int b[2008];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,num;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(b,b+n,cmp);
	if(m==1){
		cout<<b[0];
		return 0;
	}
	num=b[0];
	for(int i=1;i<m;i++){
		num=(num&b[i]);
		
	}
	cout<<num;
	return 0;
}
