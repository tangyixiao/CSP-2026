#include<bits/stdc++.h>
using namespace std;


bool chexiang(string a,string b){
	if(a==b){
		return 1;
	}
	return 0;
}

bool zuowei_pai(string a,string b){
	string c="";
	c=c+a[0]+a[1]+" ";
	string d="";
	d=d+b[0]+b[1]+" ";
	if(c==d){
		return 1;
	}
	return 0;
}
bool ce(string a,string b){
	string c="";
	string d="";
	c=c+a[2];
	d=d+b[2];
	bool r=0,x=0;
	if(c=="A"||c=="B"||c=="C"){
		r=1;
	}
	if(d=="A"||d=="B"||d=="C"){
		x=1;
	}
	if(r^x==0){
		return 1;
	}
	return 0;
}
bool xl(string a,string b){
	string c="";
	c=c+a[2];
	string d="";
	d=d+b[2];
	if(c=="A"&&d=="B")return 1;
	else if(c=="B"&&d=="A") return 1;
	else if(c=="B"&&d=="C") return 1;
	else if(c=="C"&&d=="B") return 1;
	else if(c=="D"&&d=="F") return 1;
	else if(c=="F"&&d=="D") return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string r_c,x_c,r_z,x_z;
	cin>>r_c>>r_z>>x_c>>x_z;
	cout<<chexiang(r_c,x_c);
	cout<<zuowei_pai(r_z,x_z);
	if(zuowei_pai(r_z,x_z)&&ce(r_z,x_z)){
		cout<<1;
	}
	else cout<<0;
	cout<<xl(r_z,x_z);
}

