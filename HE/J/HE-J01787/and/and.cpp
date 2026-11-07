#include<bits/stdc++.h>
using namespace std;
int c[10000];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}
	sort(c+1,c+a+1,cmp);
	int y=c[b];
	cout<<y;
	return 0;
}
