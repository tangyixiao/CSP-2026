#include<iostream>
using namespace std;
int ca1=0,ca2=0,se1=0,se2=0;
int h1,h2;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;

	
	for(int i=0;i<=1;i++){
		ca1*=10;
		ca2*=10;
		ca1+=c1[i]-'0';
		ca2+=c2[i]-'0';
	}
	
	for(int i=0;i<=1;i++){
		h1*=10;
		h2*=10;
		h1+=s1[i]-'0';
		h2+=s2[i]-'0';
	}
	se1=s1[2];
	se2=s2[2];
	
	if(ca1==ca2){cout<<"1";}
	else{cout<<"0";}
	if(ca1==ca2&&h1==h2){cout<<"1";}
	else{cout<<"0";}
	
	if(ca1==ca2&&h1==h2&&(se1=='A'&&se2=='B'||se1=='B'&&se2=='A'||se1=='C'&&se2=='A'||se1=='A'&&se2=='C'||se1=='C'&&se2=='B'||se1=='B'&&se2=='C'||se1=='D'&&se2=='F'||se1=='F'&&se2=='D')){cout<<"1";}
	else{cout<<"0";}
	if(ca1==ca2&&h1==h2&&(se1=='A'&&se2=='B'||se1=='B'&&se2=='A'||se1=='C'&&se2=='B'||se1=='B'&&se2=='C'||se1=='D'&&se2=='F'||se1=='F'&&se2=='D')){cout<<"1";}
	else{cout<<"0";}
	
	
	
	
	//cout<<ca1<<endl<<ca2<<endl<<sizeof(c1);
	//cout<<c1<<"\n"<<c2<<"\n";
	//cout<<ca1<<" "<<ca2;
	return 0;
} 
