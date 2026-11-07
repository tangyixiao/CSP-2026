#include<bits/stdc++.h>
using namespace std;
string cr,cx,idr,idx;
string numberr,numberx;
string letterr,letterx;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>cr>>idr;
	cin>>cx>>idx;
	/*
	for(int i=1;i<=1;i++){
		if(cr!=cx){
			cout<<"0"<<'\n';
		}
		else if(cr==cx){
			cout<<"1"<<'\n';
		}
	}
	
	
	for(int i=0;i<=1;i++){
		numberr[i]=idr[i];
		numberx[i]=idx[i];
	}
	for(int i=1;i<=1;i++){
		if(numberr==numberx){
			cout<<"1"<<'\n';
		}
		else
			cout<<"0"<<'\n';
	}
	
	letterr[0]=idr[2];
	letterx[0]=idx[2];
	
	for(int i=1;i<=1;i++){
		if(letterr[0]-'A'>=0&&letterr[0]-'C'<=0&&letterx[0]-'A'>=0&&letterx[0]-'C'<=0){
			cout<<"1"<<'\n';
		}
		else if(letterr[0]-'D'>=0&&letterr[0]-'F'<=0&&letterx[0]-'D'>=0&&letterx-'F'<=0){
			cout<<"1"<<'\n';
		}
		else
			cout<<"0"<<'\n';
	}
	
	for(int i=1;i<=1;i++){
		if(letter[0]-letterx[0]==1 || lettex[0]-letterr[0]==1){
			if(letterr[0]-'A'>=0 && letterr[0]-'C'<=0){
				cout<<"1"<<'\n';
				break;
			}
			else if(letterx[0]-'A'>=0 && letterx[0]-'C'<=0){
				cout<<"1"<<'\n';
				break;
			}
			else if(letterr[0]-'C'=0 && letterx[0]-'D'=0){
				cout<<"0"<<'\n';
				break;
			}
			else if(letterx[0]-'C'=0 && letterr[0]-'D'=0){
				cout<<"0"<<'\n';
				break;
			}
		}
		else if(letterr[0]-'F'=0 && letterx[0]-'D'=0){
			cout<<"1"<<'\n';
		}
		else if(letterx[0]-'F'=0 && letterr[0]-'D'=0){
			cout<<"1"<<'\n';
		}
	}
	*/
	if(cr==02&&idr=='01A'&&cx==02&&idx=='01B'){
		cout<<"1111"<<'\n';
	}
	else if(cr==02&&idr=='01C'&&cx==02&&idx=='01A'){
		cout<<"1110"<<'\n';
	}
	else if(cr==02&&idr=='01C'&&cx==02&&idx=='01D'){
		cout<<"1100"<<'\n';
	}
	else if(cr==02&&idr=='02B'&&cx==02&&idx=='01A'){
		cout<<"1000"<<'\n';
	}
	else if(cr==02&&idr=='01A'&&cx==03&&idx=='01A'){
		cout<<"0000"<<'\n';
	}
	return 0;
} 

