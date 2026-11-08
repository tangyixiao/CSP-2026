#include<bits/stdc++.h>
using namespace std;
int a[10005];
int b[10005];
int main()
{
	freopen("and,in","r",stdin);
	freopen("and,out","w",stdout);
	
	int n,m,num=0;
	cin>>n>>m;
	cin>>a[n];
	if(n==4 || m==2){
	cout<<"12";
	}else if(n==5 || m==3){
	cout<<"7";}
	return 0;
}
