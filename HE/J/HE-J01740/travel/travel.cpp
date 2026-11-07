#include<bits/stdc++.h>
using namespace std;
	string c1,s1,c2,s2,h1,h2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	h1+=s1[0];
	h1+=s1[1];
	cout<<h1<<endl;
	h2+=s2[0];
	h2+=s2[1];
	cout<<h2<<endl;
	int n=1,h=0;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]=='D'||s2[2]=='F'){
			n=0;
		}		
	}else{
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){	
		n=0;	
		}			
	}

	if(s1[2]=='A'){
		if(s2[2]=='B'){
			h=1;
		}
		
	}
	 else if(s1[2]=='B'){
		if(s2[2]=='A'||s2[2]=='C'){
			h=1;
		}
		
	}
	 else if(s1[2]=='C'){
		if(s2[2]=='B'){
			h=1;
		}
		
	}
	 else if(s1[2]=='D'){
		if(s2[2]=='F'){
			h=1;
		}
		
	}else{
			if(s2[2]=='D'){
			h=1;
		}	
	}
	cout<<(c1==c2)<<(h1==h2)<<n<<h;
	
	
	
	return 0;
}
