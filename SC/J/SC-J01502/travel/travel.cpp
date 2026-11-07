#include <bits/stdc++.h>
using namespace std ;

string sr1 , sr2 ,sx1 ,sx2 ;

int main()
{
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout);
	
	cin >> sr1 >> sr2 >> sx1 >> sx2 ;
	
	if ( sr1 != sx1 )
	{
		cout << "0000" ;
	}
	else
	{
		cout << "1" ;
		if ( sr2[0] == sx2[0] && sr2[1] == sx2[1] )
		{
			cout << "1" ;
			if (( sr2[2] == 'D' && sx2[2] == 'F' ) ||
				( sr2[2] == 'F' && sx2[2] == 'D' ) ||
				( sr2[2] == 'A' && (sx2[2] == 'B'||sx2[2] == 'C') ) ||
				( sr2[2] == 'B' && (sx2[2] == 'A'||sx2[2] == 'C')) || 
				( sr2[2] == 'C' && (sx2[2] == 'A'||sx2[2] == 'B')  ) )
			{
				cout << "1" ;
				if (( sr2[2] == 'D' && sx2[2] == 'F' ) ||
					( sr2[2] == 'F' && sx2[2] == 'D' )||
					( sr2[2] == 'A' && sx2[2] == 'B') ||
					( sr2[2] == 'B' && (sx2[2] == 'A'||sx2[2] == 'C')) || 
					( sr2[2] == 'C' &&  sx2[2] == 'B'  )  )
				{
					cout << "1" ;
				}
				else cout << "0" ;
			}
			else cout <<"00" ;
		}
		else
		{
			cout << "000" ;
		}
	}
	
	return 0 ;
}