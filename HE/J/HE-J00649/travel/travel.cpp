#include<bits/stdc++.h>
using namespace std;
char yice(char a){
	if((a=='F')||(a=='D')){
		return 'zuo';
	}
	else {
		return 'you';
	}
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	
    int c1,c2;
	char s1[5],s2[5];
	cin>>c1;
	int i=1,j=1;
	for(i=1;i<=3;i++){
		cin>>s1[i];
	}
	cin>>c2;
	for(j=1;j<=3;j++){
		cin>>s2[j];
	}
	if(c1==c2){//车厢 
		cout<<"1";
		if(s1[1]==s2[1] && s1[2]==s2[2]){//同一排 
			cout<<"1";
			if((yice(s1[3]))==(yice(s2[3]))){//同一侧 
			    cout<<"1";
				if((yice(s1[3])=='zuo') && ((yice(s2[3])=='zuo'))){//相邻 
					cout<<"1";
				}
				else{
					if((s1[3]=='A' && s2[3]=='C')||(s1[3]=='C' && s2[3]=='A')){
						cout<<"0";
					}
					else{
						cout<<"1";
					}
				}
			}
			else{
				cout<<"00";
			}
			
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

