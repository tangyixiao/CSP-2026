#include<bits/stdc++.h>
using namespace std;

int c[200500];
long long a[200500],l[200500],r[200500];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	char ch;
	for( int i=1; i<=n; ++i ){
		cin>>a[i];
		l[i]=l[i-1]+a[i];
		cin>>ch;
		c[i]=ch-'a';
	}
	for( int i=n; i>=1; --i ){
		r[i]=r[i+1]+a[i];
	}
	int lt=1,rt=n;
	long long t=0,mid=l[n]/2;
	long long ans=0;
	while( t<mid ){
		if( l[lt]==r[rt] ){
			if( c[lt]!=c[rt] ) ans+=min( l[lt],mid )-t;
			if( l[lt]>mid ){
				t=mid;
			}
			else{
				t=l[lt];
				++lt,--rt;
			}
		}
		else if( l[lt]<r[rt] ){
			if( c[lt]!=c[rt] ) ans+=min( l[lt],mid )-t;
			if( l[lt]>mid ){
				t=mid;
			}
			else{
				t=l[lt];
				++lt;
			}
		}
		else{
			if( c[lt]!=c[rt] ) ans+=min( r[rt],mid )-t;
			if( r[rt]>mid ){
				t=mid;
			}
			else{
				t=r[rt];
				--rt;
			}
		}
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}