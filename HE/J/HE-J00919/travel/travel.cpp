#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	string c1,c2;
	int s1,s2;
	char a1,a2;
	cin>>c1>>s1>>a1>>c2>>s2>>a2;
	if( c1 == c2 ){
		cout<< 1;
	}
	else{
		cout<<0;
	}
	if( s1 == s2 ){
		if(c1 == c2){
		    cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	if( (a1 >= 'A' && a1 <= 'C') && (a2 >= 'A' && a2 <= 'C') || (a1 >= 'D' && a1 <= 'E') && (a2 >= 'D' && a2 <= 'E') ){
		if(c1 == c2){
			if( s1 == s2 ){
				cout<<1;
			}
		    else{
		    	cout<<0;
			}
		}
		else{
			cout<<0;
		}
		
	} 
	else{
		cout<<0;
	}
	if( (a1 == 'A'&&a2 == 'B') || (a1 == 'B'&&a2 == 'C') || (a1 == 'B'&&a2 == 'A') || (a1 == 'C'&&a2 == 'B') || (a1 == 'D'&&a2 == 'E') || (a1 == 'E'&&a2 == 'D')){
		if( c1 == c2 ){
			if( s1 == s2 ){
				if( (a1 >= 'A' && a1 <= 'C') && (a2 >= 'A' && a2 <= 'C') || (a1 >= 'D' && a1 <= 'E') && (a2 >= 'D' && a2 <= 'E') ){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
} 
