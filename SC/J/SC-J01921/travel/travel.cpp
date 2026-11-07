#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x,y;
	char a,b,c,aa,bb,cc;
	cin>>x;
	cin>>a>>b>>c;
	cin>>y;
	cin>>aa>>bb>>cc;
	if( x==y ){
		if( a==aa and b==bb ){
			if( c<'D' and cc<'D' or c>'C' and cc>'C' ){
				if( abs( c-cc )==1 ){
					cout<<"1111";
				}
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}