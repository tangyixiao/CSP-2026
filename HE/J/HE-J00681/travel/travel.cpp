#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,a,b,q,p,l,j;
	cin>>n>>m>>a>>b;
	q=m[0];
	p=b[0];
	l=m[1];
	j=b[1];
	
	if(n==a){
		cout<<"1";
		if(q==p){
			cout<<"1";
			if((l=="A"||l=="B"||l=="C")&&(j=="A"||j=="B"||j=="C")){
				cout<<"1";
				if((l=="A"&&j=="B") || (l=="B"&&(j=="C"||j=="A")) || (l=="C"&&j=="B") || (l=="D"&&j=="F") || (l=="F"&&j=="D")){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				if((l=="D"||l=="F")&&(j=="D"||j=="F")){
					cout<<"1";
					if((l=="A"&&j=="B") || (l=="B"&&(j=="C"||j=="A")) || (l=="C"&&j=="B") || (l=="D"&&j=="F") || (l=="F"&&j=="D")){
					cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else{
					cout<<"0";
				}
			}
		}
		else{
			cout<<"0"; 
		}
	}
	else{
		cout"0";
	}
	
	return 0;
}
