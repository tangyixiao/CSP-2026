#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			char cx=s1[2],cy=s2[2];
			if((cx=='A'||cx=='B'||cx=='C')&&(cy=='A'||cy=='B'||cy=='C')){
				cout<<1;
				if(cx+1==cy||cy+1==cx) cout<<1;
				else cout<<0;
			}else if((cx=='D'||cx=='F')&&(cy=='D'||cy=='F')){
				cout<<1;
				if(cx+2==cy||cy+2==cx) cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000"; 
	return 0;
} 