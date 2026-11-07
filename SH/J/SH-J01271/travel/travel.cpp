#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int c1,c2;
	string s1,s2;
	int si1=0,si2=0;
	int no1=0,no2=0;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	char se1=s1[2],se2=s2[2];
	if(se1=='A'||se1=='B'||se1=='C')si1=1;
	if(se2=='A'||se2=='B'||se2=='C')si2=1;
	no1=(s1[0]-'0')*10+s1[1]-'0';
	no2=(s2[0]-'0')*10+s2[1]-'0';
//	cout<<"第一个人在车厢【"<<c1<<"】的【"<<se1<<"】列【"<<no1<<"】座"<<endl; 
//	cout<<"第二个人在车厢【"<<c2<<"】的【"<<se2<<"】列【"<<no2<<"】座"<<endl; 
	if(c1!=c2){
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(no1!=no2){
			cout<<"1000";
		fclose(stdin);
		fclose(stdout);
				return 0;
		}	
	if(se1=='A'){
			if(se2!='B'&&se2!='C'){
				cout<<"1100";
		fclose(stdin);
		fclose(stdout);
				return 0;
			}
		}else if(se1=='B'){
			if(se2!='A'&&se2!='C'){
				cout<<"1100";
		fclose(stdin);
		fclose(stdout);
				return 0;
			}
		}else if(se1=='C'){
			if(se2!='B'&&se2!='A'){
				cout<<"1100";
		fclose(stdin);
		fclose(stdout);
				return 0;
			}
		}else if(se1=='D'){
			if(se2!='F'){
				cout<<"1100";
		fclose(stdin);
		fclose(stdout);
				return 0;
			}
		}else if(se1=='F'){
			if(se2!='D'){
				cout<<"1100";
		fclose(stdin);
		fclose(stdout);
				return 0;
			}
		}
		if(no1==no2&&(se1==se2+1||se1==se2-1)){
			cout<<"1111";
		fclose(stdin);
		fclose(stdout);
			return 0;
		}
	cout<<"1110";
			fclose(stdin);
		fclose(stdout);
return 0;
} 
