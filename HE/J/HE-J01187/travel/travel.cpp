#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

bool check(string x,string y){//是否在同一侧  
	if((x=="A"||x=="B"||x=="C")&&(y=="A"||y=="B"||y=="C"))return true;
	else if((x=="D"||x=="F")&&(y=="D"||y=="F")) return true;
	else {
		//如果，他俩在同一侧，返回真，否则返回假 
		return false;
	}
}
bool jiaoruichao(string x,string y){
	if((x=="A"&&y=="B")||(x=="B"&&y=="C")||(x=="B"&&y=="A")||(x=="C"&&y=="B")||(x=="D"&&y=="F")||(x=="F"&&y=="D")){
		return true; 
	}
	else return false;
} 

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){//不在同一节车厢 
		cout<<"0000";
		return 0;
	}
	else {
		cout<<"1";//在同一节车厢 ，车厢输出 
		string a,b;
		a+=s1[0],a+=s1[1];//赋值为排  
		b+=s2[0],b+=s2[1];
		if(a!=b) cout<<"000";//不在同一排 ，输出 
		else{
			cout<<"1";//在同一排 排 输出 
			a="",b=""; 
			a=s1[2],b=s2[2];
			if(check(a,b)) {//如果在同一侧 
				cout<<"1"; 
			 	if(jiaoruichao(a,b)) cout<<"1";//如果挨着 
			 	else cout<<"0";
				
				
			}
			else cout<<"00"; //不在同一侧输出 
			
		} 
	}
	return 0;
}

/*
RP++; 
*/



