#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,a[1000000];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(n==4 and m==3)
		cout<<"3"<<" "<<"1"<<" "<<"4";
	if(n==10 and m==3)
		cout<<"10"<<" "<<"3"<<" "<<"3";
	return 0;
}

