#include <bits/stdc++.h>
using namespace std;
int n,m,a[7],b[7],c,d,s11,s22;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> n >> s1 >> m >> s2;
	a[1] = s1[0] - '0',a[2] = s1[1] - '0';
	b[1] = s2[0] - '0',b[2] = s2[1] - '0';
	c = 10 * a[1] + a[2],d = 10 * b[1] + b[2];
	s1 = s1[2],s2 = s2[2];
	if(n == m){
		cout << 1;
		if(c == d){
		    cout << 1;
			s11 = s1[0] - 'A'+1,s22 = s2[0] - 'A'+1;
			if(max(s11,s22) == 6 && min(s11,s22) == 4){
		        cout << 1;
		        if(max(s11,s22) - min(s11,s22) == 2)
		            cout << 1;
		        else
		            cout << 0;
		    }
		    else if(max(s11,s22) <= 3 && min(s11,s22) >= 1){
		        cout << 1;
		        if(max(s11,s22) - min(s11,s22) == 1)
		        	cout << 1;
		        else
		            cout << 0;
		    }
		    else
		        cout << "00";
	    }
	    else{
	    	cout << "000";
		}
    }
    else{
    	cout << "0000";
	}
	return 0;
}
