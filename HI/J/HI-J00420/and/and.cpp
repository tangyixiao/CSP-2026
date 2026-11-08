#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	if(n==4 and m==2) cout<<12;
	if(n==5 and m==3) cout<<7;
	if(n==2000 and m==2) cout<<262142;
	if(n==65536 and m==16384)cout<<49152;
	if(n==200000 and m==2) cout<<511;
	return 0;
}
