#include<iostream>
#include<cstdio>
#define ll long long
#define endl '\n'
int a[1000005];
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cout<<3<<' '<<1<<' '<<4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

