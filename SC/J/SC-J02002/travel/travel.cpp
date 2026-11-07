#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r[5]={ };
    string che[5]={ };
    bool flag=false;
    bool sd=false;
    bool we=false;
    cin>>r[1]>>che[1]>>r[2]>>che[2];
	if(r[1]==r[2]){
    	cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(r[1]==r[2]&&che[1].substr(0,2)==che[2].substr(0,2)){
		we=true;
		cout<<1;
		
	}
	else{
		cout<<0;
}
	
	if(we==true){
	
		if(che[1].substr(2,1)<="C"&&che[2].substr(2,1)>="D"){
		cout<<0;}

	else{
	    if(che[1].substr(2,1)>="D"&&che[2].substr(2,1)<="C"){
	    	cout<<0;
		}
		else{
			cout<<1;
			sd=true;
		}
	}}
	if(we==false){
		cout<<0;
	}

    if(sd==true){
			if(che[1].substr(2,1)=="A"&&che[2].substr(2,1)=="B"){flag=true;
			cout<<1;}
			if(che[1].substr(2,1)=="B"&&che[2].substr(2,1)=="A"){flag=true;
			cout<<1;}
		    if(che[1].substr(2,1)=="C"&&che[2].substr(2,1)=="B"){flag=true;
			cout<<1;}
			if(che[1].substr(2,1)=="B"&&che[2].substr(2,1)=="C"){flag=true;
			cout<<1;}
			if(che[1].substr(2,1)=="D"&&che[2].substr(2,1)=="F"){flag=true;
			cout<<1;}
			if(che[1].substr(2,1)=="F"&&che[2].substr(2,1)=="C"){flag=true;
			cout<<1;}
			if(flag==false)
			cout<<0;}
		if(sd==false){
			cout<<0;
		}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}