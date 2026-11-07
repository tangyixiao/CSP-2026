#include<bits/stdc++.h>
using namespace std;
char r[10],x[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
		for(int j=1;j<=6;j++)
		scanf("%c",&r[j]);
		getchar();
		for(int j=1;j<=6;j++)
		scanf("%c",&x[j]);
	int kk=0;
	if(r[1]==x[1]&&r[2]==x[2])
	    cout<<1;
	else
	{cout<<0;
	kk=1;
	}
	if(kk==0)   {	
	if(r[4]==x[4]&&r[5]==x[5])
	    cout<<1;
	else{
	cout<<0;
	kk=1;
	}
	}
	else
	cout<<0;
	if(kk==0) {  
	if(r[6]<='C'&&x[6]<='C')
	    cout<<1;
	else
	{
		if(r[6]>'C'&&x[6]>'C'&&r[6]<='F'&&x[6]<='F') 
		cout<<1;
		else{
		cout<<0;
		kk=1; 
		}
		
	}	}
	else
	cout<<0;  
	if(kk==0){	
	if(r[6]+1==x[6]&&x[6]!='D'||r[6]-1==x[6]&&x[6]!='C')
	    cout<<1;
	else 
	    cout<<0;}  
	else
	cout<<0;
    return 0;
}