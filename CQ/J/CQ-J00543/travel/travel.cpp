#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1;
	cin>>c2>>s2; 
	int t1=(s1[0]-'0')*10+(s1[1]-'0');
	int t2=(s2[0]-'0')*10+(s2[1]-'0');
	char te1=s1[2],te2=s2[2];
	bool tc=false,tp=false,tce=false,tm=false;
	if(c1==c2){
		tc=true;
	}
	if(tc and (t1==t2)){
		tp=true;
	}
	if(tp and (((te1=='A' or te1=='B' or te1=='C')and(te2!='D' && te2!='E'))or((te1=='D' or te1=='E') and (te2=='D' or te2=='E')))){
		tce=true;
	}
	if(tce and (abs(te1-te2)==1)){
		tm=true;
		if((te1=='C' and te2=='D')or(te1=='D' and te2=='C')){
			tm=false;
		}
	}
	printf("%d%d%d%d",tc,tp,tce,tm);
	return 0;
}
//Awakening-Dawn-Forever-Affirmative-Accompany
//Horizon-Broken-Revenge-She-Brighter
