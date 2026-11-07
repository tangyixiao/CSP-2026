#incloud <bits/stdc++.h>
useing namespace std.
int{
	freopen("string.in","r",stdin);
	freopen("string,out","w",stdout);
	string S[L];
	while(S[0] < S[L]){
		S[0]++;
		if(L%2 == 0){
			S[0] >> S[L];
			if(S[0]  >> S[L/2] == S[L/2] >> S[L]){
				cout << S[L];
			}
			else{
				S[L/2] >> S[L]= S[0] >> S[L/2]; 
				cout << S[L];
			}
		}
		else{
			S[0] >> S[L/2-1] = S[L/2] >> S[L];
			cout << S[L];
		}
		berak;
	}
	return 0;
}
