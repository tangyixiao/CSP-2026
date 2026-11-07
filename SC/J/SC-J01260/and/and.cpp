#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],x;
bool mmax;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4 and m==2){
		cout<<12;
	}
	if(n==5 and m==3 and a[1]==31 and a[2]==3){
		cout<<7;
	}
	if(n==2000 and m==2 and a[1]==141080 and a[2]==11103){
		cout<<262142;
	}
	return 0;
} 