#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[1000]={},b[1000]={0};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		int c=a[i];
		for(int j=1;c!=0;j++){
			b[i]=b[i]*10+c%2;
			c=c/2;
		}
	}
	sort(a,a+n,cmp);
	int h=0;
	for(int i=0;i<m;i++){
		h=h&b[i];
	}
	cout<<h;
	return 0;
}
