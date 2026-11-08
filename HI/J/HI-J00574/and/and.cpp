#include <bits/stdc++.h>
using namespace std;
long long n,m,c,s,a[200005],b[200005],k,k1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c;
		int s1=s;
		while(a!=0){
			a[++k]=c%2;
			c/=2;
		}
		while(s1!=0){
			b[++k1]=s1%2;
			s1/=2;
		}
		for(int j=1;j<=max(k,k1);j++){
			if(a[j]==1&&b[j]==1){
				s+=2*j;
			}
		}
	}
	cout<<s;
	return 0;
}
