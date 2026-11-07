#include <bits/stdc++.h>
using namespace std;

bool vis[1005];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1"; 
	}
	else if(c1!=c2){
		cout<<"0"; 
	}
	for(int i=1;i<=16;i++){
	if(s1.find(i)==isdigit(i)){
		cout<<"1";
		if(vis[((s1.find("D")&&s2.find("F"))&&(s1.find("F")&&s2.find("D"))=true&&(s1.find("A")&&s2.find("B"))&&(s1.find("A")&&s2.find("c"))&&(s1.find("B")&&s2.find("C"))&&(s1.find("B")&&s2.find("A"))&&(s1.find("C")&&s2.find("A"))&&((s1.find("C")&&s2.find("B"))=true)]){
			cout<<"1";
			
		}
		if(vis[((s1.find("D")&&s2.find("F"))&&(s1.find("F")&&s2.find("D")=true)&&(s1.find("A")&&s2.find("B"))&&(s1.find("B")&&s2.find("C"))&&(s1.find("B")&&s2.find("A")&&(s1.find("C")&&s2.find("A"))=true)]){
			cout<<"1";
		}
	}
		cout<<"0";
		if(vis[((s1.find("D")&&s2.find("F"))&&(s1.find("F")&&s2.find("D")=false)&&(s1.find("A")&&s2.find("B"))&&(s1.find("A")&&s2.find("c"))&&(s1.find("B")&&s2.find("C"))&&(s1.find("B")&&s2.find("A"))&&(s1.find("C")&&s2.find("A"))&&(s1.find("C")&&s2.find("A"))=false)]){
			cout<<"0";
		}
		if(vis[((s1.find("D")&&s2.find("F"))&&(s1.find("F")&&s2.find("D")=false)&&(s1.find("A")&&s2.find("B"))&&(s1.find("B")&&s2.find("C"))&&(s1.find("B")&&s2.find("A")&&(s1.find("C")&&s2.find("A"))=false)]){
			cout<<"0";
		}
	}
	}	

	return 0;
} r
