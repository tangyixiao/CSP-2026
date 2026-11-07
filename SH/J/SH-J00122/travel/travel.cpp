#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string a,b;
	string c1,c2;
	cin>>c1>>a>>c2>>b;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		cout<<1;
		if(a[0]==b[0]&&a[1]==b[1]){
		cout<<1;
		if('A'<=a[2]&&a[2]<='C'){
		if('A'<=b[2]&&b[2]<='C'){
			cout<<1;
			if(abs(a[2]-b[2])==1){
				cout<<1;
			}
			else{
				cout<<0;
			}
			}
			else{
				cout<<"00";
			}
		}
		else{
			if('E'<=b[2]&&b[2]<='F'){
				cout<<1;
				if(abs(a[2]-b[2])==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
	}
	else{
		cout<<"000";
	}	
	}
	else{
		cout<<"0000";
	}
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
