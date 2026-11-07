#include<iostram>
using std ;
int main{
	int a ;
	cin >> a ;
	int b [a + 5][2];
	for ( int d = 0 , d < a , d++ ){
		cin >> b[d][1] >> b[d][0] ;
	}
	int ans == 0 ;
	for ( int f = 0 , f * 2 < a ; f++ ){
		if ( b[f][1] = b[a - f][1] && b[f][0] = b[a-f][0]){
			cuntinue ;
		}
		else if ( b[f][1] = b[a-f][1]){
			ans += b[f][1] ;
		}
		else ans += b[f][0];
		}
	}
}
