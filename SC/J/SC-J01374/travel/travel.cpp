#include<bits/stdc++.h>
using namespace std;
int a[5]{131,133,138},b[5]{131,132,133,138};
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";  //不在同一车厢 
		fclose(stdin);
		fclose(stdout); 
		return 0; 
	}
	cout<<"1";  //在同一车厢 
	
	if(s1[0]==s2[0] && s1[1]==s2[1]){  //在同一车厢同一排 
		cout<<"1";      
	}else{
		cout<<"000";  //不在同一排
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	 
	for(int i=0;i<=3;++i){
		if(s1[2]+s2[2]==b[i]){
			cout<<"1";
			break;
		}
		if(i==3){
			cout<<"00";
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
	}
	
	for(int i=0;i<=2;++i){
		if(s1[2]+s2[2]==a[i]){
			cout<<"1";
			break;
		}
		if(i==1){
			cout<<"0";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}