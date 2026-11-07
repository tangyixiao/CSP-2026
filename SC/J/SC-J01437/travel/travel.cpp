#include<bits/stdc++.h>
using namespace std;	
char a,b,c,d,f,g,h,i,e,j;
int main(){
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	if(a==f && b==g) cout<<"1";
	else cout<<"0";
	if(a==f && b==g){
		if(c==h && d==i) cout<<"1";
		else cout<<"0";
	}else cout<<"0";
	if(a==f && b==g){
		if(c==h && d==i){
			if(e==65 || e==66 || e==67){
				if(j==65 || j==66 || j==67){
					cout<<"1";
				}
				else if(e==68 || e==69){
					if(j==68 || j==69){
						cout<<"1";
					}
				}
				else cout<<"0";
			}
			else if(e==68 || e==69){
				if(j==68 || j==69){
					cout<<"1";
				}
			}
			else cout<<"0";
		}
		else cout<<"0";
	}
	else cout<<"0";
	if(a==f && b==g){
		if(c==h && d==i){
			if(e==j+1 || e==j-1){
				if(e==67 && j==68){
					cout<<"0";
				}
				else if(e==68 && j==67){
					cout<<"0";
				}
				else cout<<"1";
			}
			else cout<<"0";
		}
		else cout<<"0";
	}
	else cout<<"0";
	return 0;
}