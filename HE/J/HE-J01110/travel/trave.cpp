#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel2.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c2,s2,g,g2;
	string p,p2;
	cin>>c>>s>>c2>>s2;
	if(c==c2){
		cout<<'1';
		for(int i=0;i<s.size();i++){
		    if(s[i]>='0'&&s[i]<='9'){
				g+=s[i];
		    }
		    if(s[i]>='A'&&s[i]<='F'){
				p[0]=s[i];
		    }
	    }
	    for(int i=0;i<s2.size();i++){
		    if(s2[i]>='0'&&s2[i]<='9'){
			    g2+=s2[i];
		    } 
		    if(s2[i]>='A'&&s2[i]<='F'){
			    p2[0]=s2[i];
		    } 
	    }
	    if(g==g2){
		    cout<<'1';
	    }
	    else{
		    cout<<'0';
		}
		if((p[0]<='C'&&p2[0]<='C'&&g==g2)||(g==g2&&p2[0]>='D'&&p[0]>='D')){
			cout<<'1';
		}
		else{
			cout<<'0';
		}
	    if((p2[0]!='D'&&p[0]!='F')||(p[0]!='D'&&p2[0]!='F')){
			if((p[0]+1==p2[0]&&g==g2)||(p[0]-1==p2[0]&&g==g2)){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			if(p[0]+2==p2[0]||p[0]-2==p2[0]){
				cout<<'1';
			}
			else{
				cout<<'0';
			}
		}
	}
	else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
