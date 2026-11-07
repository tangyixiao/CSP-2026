#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	int x,y;
	x=a2[2];y=b2[2];
	if(a1==b1){
		cout<<"1";
		if(a2[0]==b2[0] && a2[1]==b2[1]){
			cout<<"1";
			if((x<=67 && y<=67) || (x>67 && y>67)){
			    cout<<"1";
			    if(x-y==1 || x-y==-1){
			    	cout<<"1";
			    }else
			    	cout<<"0";
			}else
				cout<<"00";
		}else
			cout<<"000";	
	}else
		cout<<"0000";
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
