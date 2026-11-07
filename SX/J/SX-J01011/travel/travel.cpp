#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=s1/10,b=s2/10,c=s1%10,d=s2%10;
	if(c1=c2){
		cout<<1;
		if(a==b){
			cout<<1;
			if(c=="F"&&d=="C"||d=="F"&&c=="C"||c=="A"&&d=="B"||d=="A"&&c=="B"||c=="A"&&d=="C"||d=="A"&&c=="C"||c=="B"&&d=="C"||d=="B"&&c=="C"){
				cout<<1;
				if(c=="F"&&d=="C"||d=="F"&&c=="C"||c=="A"&&d=="B"||d=="A"&&c=="B"||c=="B"&&d=="C"||d=="B"&&c=="C"){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<00;
			}
		}
		else{
			cout<<000;
		}
	}
	else{
		cout<<0000;
	}
	return 0;
}