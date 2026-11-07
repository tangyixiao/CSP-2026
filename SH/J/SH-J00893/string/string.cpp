#inculde<bis/c++.t>;
used string ;
int main {
	int a ;
	cin >> a ;
	int b [ a + 5 ] ;
	for ( int c = 0 , c < a , c++ ){
		cin >> b[ c ] ;
	}
	int ans == 0 ;
	for ( int d = 0 ; d < a ; d++){
		for ( int e = 0 , e < a ; e++ ){
			if ( b[ d ] ^ b[ e ] > ans ){
				ans == b[ d ] ^ b[ e ] ;
			}
		}
	}
	cout << ans ;
	return 0 ;
}

