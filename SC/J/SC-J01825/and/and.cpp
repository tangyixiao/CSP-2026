#include<bits/stdc++.h>
using namespace std;
long long n,m,y,x[1000];
long long h;
bool e(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	
	
	sort(x,x+n,e);
	
	y=x[0];
	for(int i=1;i<m;i++){
		y=y&x[i];
	}
	cout<<y;
	return 0;
}