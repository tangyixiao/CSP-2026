#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,n,m,a,b,i;
    string s1,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
    	cout<<1;
    	n=(s1[0]-'0')*10+(s1[1]-'0');
    	m=(s2[0]-'0')*10+(s2[1]-'0');
    	if(n==m){
    		cout<<1;
    		a=s1[2]-'A';
    		b=s2[2]-'A';
    		if(a<b){
    			i=a;
    			a=b;
    			b=i;
			}
			if(a==3 && b==2){
				cout<<0<<0;
			}
			else{
				if(a-b==1){
					cout<<1;
					if(a==3 && b==2){
						cout<<0;
					}
					else{
						cout<<1;
					}
				}
				else if(a==5 && b==3){
					cout<<1<<1;
				}
				else{
					if(a==2 && b==0){
						cout<<1;
						cout<<0;
					}
					else{
						cout<<0;
						cout<<0;
					}
				}
			}
		}
		else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
} 