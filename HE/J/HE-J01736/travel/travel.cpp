#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int last1=s1[2]-'A';
	int last2=s2[2]-'A';
	if(last1==3)last1++;
	if(last2==3)last2++;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if((last1<3&&last2<3)||(last1>3&&last2>3)){
				if(abs(last1-last2)==1){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
