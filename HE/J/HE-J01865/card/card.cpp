#include<bits/stdc++.h>
using namespace std;
const long long N=3e5+10;
int a[N];
int ans=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(m==0){
			ans=0;
		}
		else
		ans=n;
	}
	cout<<n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
