#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<1;
		if(c[0]==d[0]){
			if(c[1]==d[1]){
				cout<<1;
				if(c[2]>='C' && d[2]>='C'){
					cout<<1;
					if(c[2]=='B' || d[2]=='B'){
						cout<<1;
					}
					else{
						cout<<0<<'a';
					}
				}
				else if(c[2]<'C' && d[2]<'C'){
					cout<<11;
				}
				else{
					cout<<1<<0<<'b';
				}
			}
			else{
				cout<<0<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
