#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <string> 
using namespace std;
int r_cexiang,x_cexiang;
string r_zuowei,x_zuowei;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r_cexiang>>r_zuowei>>x_cexiang>>x_zuowei;
	if(r_cexiang==x_cexiang){
		cout<<1;
	}else{
		cout<<0;
	}
	if(r_cexiang==x_cexiang && r_zuowei[0]==x_zuowei[0] && r_zuowei[1]==x_zuowei[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	int a=0;
	if(x_zuowei[2]=='A' || x_zuowei[2]=='B'|| x_zuowei[2]=='C'){
		a++;
	}
	if(r_zuowei[2]=='A' || r_zuowei[2]=='B'|| r_zuowei[2]=='C'){
		a++;
	}
	if(x_zuowei[2]=='F' && x_zuowei[2]=='D'){
		a++;
	}
	if(r_zuowei[2]=='F' && r_zuowei[2]=='D'){
		a++;
	}
	if(a>=2 && r_cexiang==x_cexiang && r_zuowei[0]==x_zuowei[0] && r_zuowei[1]==x_zuowei[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	int b=0;
	if(r_zuowei[2]=='A' && x_zuowei[2]=='B'){
		b++;
	}
	if(r_zuowei[2]=='B' && x_zuowei[2]=='A'){
		b++;
	}
	if(r_zuowei[2]=='C' && x_zuowei[2]=='B'){
		b++;
	}
	if(r_zuowei[2]=='B' && x_zuowei[2]=='C'){
		b++;
	}
	if(r_zuowei[2]=='D' && x_zuowei[2]=='F'){
		b++;
	}
	if(r_zuowei[2]=='F' && x_zuowei[2]=='D'){
		b++;
	}
	if(b>=1 && r_cexiang==x_cexiang && r_zuowei[0]==x_zuowei[0] && r_zuowei[1]==x_zuowei[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
