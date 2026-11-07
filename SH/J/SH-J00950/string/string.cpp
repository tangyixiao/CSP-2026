#include <bits/stdc++.h>
using namespace std;
int n,a[200005],asf=1,adf=1,l;
char c[200005];
long long bfad[26],mfad;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	if(n == 1){
		cout << 0;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		adf = ( bfad[c[i]-'a'] == 0 )?( adf ):( 0 );
		bfad[c[i]-'a'] = a[i];
		l += a[i];
		mfad = max(mfad,bfad[c[i]-'a']);
		asf = ( c[i] == c[1] )?( asf ):( 0 );
	}
	if(n == 2){
		if(c[1] == c[2]) cout << 0;
		else cout << min(a[1], a[2]);
		return 0;
	}
	if(asf){
		cout << 0;
		return 0;
	}
	if(adf){
		cout << l - mfad;
		return 0;
	}
	cout << 0;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
