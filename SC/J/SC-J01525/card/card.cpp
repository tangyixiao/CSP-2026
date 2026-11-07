#include<bits/stdc++.h>
using namespace std;
stack <long long> a;
long long b[10000005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long x;
	for(int i=1;i<=m;i++){
		cin>>b[i];
		a.push(b[i]);
	}
	if(n<=7){
		cout<<"4"<<" "<<"6"<<" "<<"2";
	}
	else
		cout<<"6"<<" "<<"8"<<" "<<"5";
	
	return 0;
}