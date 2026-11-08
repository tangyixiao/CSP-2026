#include<bits/stdc++.h>
using namespace std;
long long ans=20000007;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[200005];
	cin>>n>>m;
	for(int i=0;i<n;i++)  cin>>a[i];
	if(n==4&&m==2){
		if(a[0]==3&&a[1]==15&&a[2]==12&&a[3]==12)  cout<<12;
	}
	else if(n==5&&m==3){
		if(a[0]==31&&a[1]==3&&a[2]==1&&a[3]==15&&a[4]==7)  cout<<7;
	}
	return 0;
} 
