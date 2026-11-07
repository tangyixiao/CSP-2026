#include <bits/stdc++.h>
using namespace std ;

int const N = 2e5 + 5 ;

int n ;
long long k , cnt , kk , kl  ;
pair< long long , char > a[N] ;
string s ;

int ra[N] , la[N] , cnra , cnla ;

void bbb()
{
	long long kx = k /= 2 ;
	for ( int i = 1 ; i <= n ; i++ )
	{
		if ( kx > 0 )
		{
			ra[++cnra] = i;
			kx -= a[i].first ;
			if ( kx < 0 )la[++cnla] = i ; 
		}
		else
		{
			la[++cnla] = i ;
		}
	}
}

int main()
{
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout);
	
	cin >> n  ;
	
	for ( int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i].first >> a[i].second ;
		k += a[i].first ;
	}
	kk = kl = k / 2 ;
	
	bbb() ;
	
	
	int raa = 1 , laa = cnla ;
	while ( raa <= cnra && laa >= 1 )
	{
		char sra = a[ra[raa]].second , sla = a[la[laa]].second ;
		if ( a[ra[raa]].first > a[la[laa]].first )
		{
			
			a[ra[raa]].first -= a[la[laa]].first ;
			long long u = a[la[laa]].first ;
			if ( kk >= u && kl >= u )
			{
				kk -= u , kl -= u ;
			}
			else if ( kk < u || kl < u )
			{
				u = min(kk,kl) ;
			}
			cnt += ( sra == sla ? 0 : u ) ;
			laa -- ;
		}
		else if ( a[ra[raa]].first < a[la[laa]].first )
		{
			a[la[laa]].first -= a[ra[raa]].first ;
			long long u = a[ra[raa]].first ;
			if ( kk >= u && kl >= u )
			{
				kk -= u , kl -= u ;
			}
			else if ( kk < u || kl < u )
			{
				u = min(kk,kl) ;
			}
			cnt += ( sra == sla ? 0 : u ) ;
			raa ++ ;
		}
		
		else 
		{
			
			long long u = a[la[laa]].first ;
			if ( kk >= u && kl >= u )
			{
				kk -= u , kl -= u ;
			}
			else if ( kk < u || kl < u )
			{
				u = min(kk,kl) ;
				
			}
			cnt += ( sra == sla ? 0 : u ) ;
			laa -- ;
			raa ++ ;
		}
	}
	
	cout << cnt ;
	
	return 0 ;
}