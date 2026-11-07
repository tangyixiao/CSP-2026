#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int wer[300];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	wer['A']=1;wer['B']=2;wer['C']=3;wer['D']=5;wer['F']=6;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
	else {
		cout<<1;
		if(!(s1[0]==s2[0]&&s1[1]==s2[1]))cout<<"000";
		else{
			cout<<1;
			if(!( ( wer[ s1[2] ]<4&&wer[ s2[2] ]<4 ) || ( wer[ s1[2] ]>4&&wer[ s2[2] ]>4 ) ))cout<<"00";
			else{
				cout<<1;
				if(!(abs( wer[ s1[2] ]-wer[ s2[2] ])==1))cout<<0;
				else cout<<1;
			}
		}
	}
	return 0;
}
