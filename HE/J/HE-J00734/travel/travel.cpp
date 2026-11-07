#include<bits/stdc++.h>
using namespace std;
int a[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	char s1,s2;
	int n1,n2;
	cin>>c1>>n1>>s1>>c2>>n2>>s2;
	if(n1<n2) {
		int t=n2;
		n2=n1;
		n1=t;
	}
	if(c1==c2){
		a[0]=1;
		if(n1==n2){
			if((s1<='C' && s2<='C') ||(s1>'C' && s2>'C'))
				a[2]=1;
			a[1]=1;
		}
		if(n1==n2){
			if(s1!='F' || s2!='F'){
				if(s1-s2==1 || s2-s1==1) a[3]=1;
			}
			if((s1=='F' && s2=='D') || (s1=='D' && s2=='F')){
				a[3]=1;
			}if((s1=='C' && s2=='D') || (s1=='D' && s2=='C'))
			    a[3]=0;
		}if(n1-n2==1)	{
			if(s1==s2) a[3]=1;
		}
		
	} 
	for(int i=0;i<=3;i++) cout<<a[i];
	cout<<"\n";
	return 0;
}
