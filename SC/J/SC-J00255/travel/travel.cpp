#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int pai1,pai2;
	char lie1,lie2;
	if(c1==c2){
		cout<<1;
		pai1=(s1[0]-'0')*10+(s1[1]-'0');
      	pai2=(s2[0]-'0')*10+(s2[1]-'0');
		lie1=s1[2],lie2=s2[2];
		int side1,side2;
	    
		if('A'<=lie1&&lie1<='C'){
	    	side1=1;
		}else{
			side1=2;
		}
	    if('A'<=lie2&&lie2<='C'){
	    	side2=1;
		}else{
			side2=2;
		}		
		
		if(pai1==pai2){
			cout<<1;
			if(side1==side2){
				cout<<1;
				if( (lie1=='A')&&(lie2=='B') || (lie1=='B')&&(lie2=='A') || (lie1=='B')&&(lie2=='C') || (lie2=='B')&&(lie1=='C') || (lie1=='D')&&(lie2=='F') || (lie2=='F')&&(lie1=='D') ){
					cout<<1;
		    	}else{
				    cout<<0;
			    }	
			}else{
				cout<<"00";
			}

		}else{
			cout<<"000";
		}

			
	}else{
		cout<<"0000";
	}

	return 0;
} 