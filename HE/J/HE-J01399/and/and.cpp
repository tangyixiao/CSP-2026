#include<bits/stdc++.h>
using namespace std;
int n,x,a[200005];
bool com(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,com);
	int y=a[1];
	for(int i=2;i<=x;i++){
		y&=a[i];
	}
	cout<<y;
	return 0;
}

