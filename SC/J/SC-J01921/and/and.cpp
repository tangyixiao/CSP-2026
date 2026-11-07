#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[200500];
int c[37][200500];
int is[200500];

void f( int x,int t ){
	int i=0;
	while( x ){
		if( x&1 ){
			c[i][++c[i][0]]=t;
		}
		x=x>>1;
		++i;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for( int i=1; i<=n; ++i ){
		cin>>a[i];
		f( a[i],i );
	}
	int s=0;
	for( int i=32; i>=0; --i ){
		if( c[i][0]>=m ){
			if( !s ){
				s=c[i][0];
				for( int j=1; j<=s; ++j ) {
					is[c[i][j]]=i+1;
				}
			}
			else{
				int cnt=0;
				for( int j=1; j<=c[i][0]; ++j ){
					if( is[c[i][j]] ){
						is[c[i][j]]=i+1;
						++cnt;
					}
				}
				if( cnt>=m ){
					for( int j=1; j<=n; ++j ){
						if( is[j]!=i+1 ) is[j]=0;
					}
					s=cnt;
				}
			}
		}
		if( s==m ) break;
	}
	if( s<m ) cout<<"0";
	else{
		int x=0;
		int cnt=0;
		bool b=1;
		for( int i=1; i<=n and cnt<m; ++i ){
			if( is[i] ){
				if( b ){
					x=a[i];
					b=0;
				}
				else x=x&a[i];
				++cnt;
			}
		}
		cout<<x;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}