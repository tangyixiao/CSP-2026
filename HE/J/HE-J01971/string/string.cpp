#include<bits/stdc++.h> 
using namespace std;
struct f{
	int ks;
	int js;
	char zhi;
} a[100000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s=0,u=0;
	string x;
	cin>>n;
	for(int i=0,m;i<n;i++){
		cin>>m>>a[i].zhi;
		a[i].ks=a[i-1].js+1;
		a[i].js=a[i-1].js+m;
		u+=m;
		for(int j=a[i].ks;j<=a[i].js;j++) x+=a[i].zhi;
	}
	for(int i=0;i<u/2;i++){
		if(x[i]!=x[s-i-1]) s++;
	}
	cout<<s;
	return 0;
}
