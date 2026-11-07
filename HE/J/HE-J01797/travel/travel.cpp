#include<bits/stdc++.h>
using namespace std;
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
string c1,s1 ,c2 ,s2;
int main(){
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(s1 == s2){
		s2 += s1;
		
	}else{
		c1 -= c2;
	}
	cout << c1 << s2;
	
	
	
	return 0;
} 
