#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n1,n2;
	char s1,s2;
	string a,c;
	cin >> a >>n1 >> s1 >> c >> n2 >> s2;
	if(a == c){
		cout<<1;
		if(n1 == n2){
			cout<<1;	
		}	
		else cout<<0;
		if(s1 == s2){
			cout<<1;	
		}
		else cout<<0;
		if(n1 != n2 || s1 != s2) cout<<0;
		else cout<<1;
	}
	else if(a != c){
		cout<<0;
		if(n1 == n2){
			cout<<1;		
		}	
		else if(n1 != n2) cout<<0;
		if(s1 == s2){
			cout<<1;	
		}
		else if (s1 != s2) cout<<0;
		if(n1 != n2 || s1 != s2) cout<<0;
		else cout<<1;
	}
	return 0;
}
