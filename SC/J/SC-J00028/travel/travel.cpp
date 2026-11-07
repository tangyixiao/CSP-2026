#include <bits/stdc++.h>
 using namespace std;
 int main(){
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	string q,w,e,r;
 	cin>>q>>w>>e>>r;
 	if(q!=e){
 		cout<<"0000";
 		return 0;
	 }
	 if(w[0]!=r[0]||w[1]!=r[1]){
	 	cout<<"1000";
	 	return 0;
	 }
	 if(w[2]=='A'||r[2]=='A'){
	 	if(r[2]=='D'||r[2]=='F'||w[2]=='D'||w[2]=='F'){
	 		cout<<"1100";
	 		return 0;
		 }
	 }
	 if(w[2]=='B'||r[2]=='B'){
	 	if(r[2]=='D'||r[2]=='F'||w[2]=='D'||w[2]=='F'){
	 		cout<<"1100";
	 		return 0;
		 }
	 }
	 if(w[2]=='C'||r[2]=='C'){
	 	if(r[2]=='D'||r[2]=='F'||w[2]=='D'||w[2]=='F'){
	 		cout<<"1100";
	 		return 0;
		 }
	 }
	 if(w[2]=='A'&&r[2]=='C'){
	 	cout<<"1110";
	 	return 0;
	 }
	 if(w[2]=='C'&&r[2]=='A'){
	 	cout<<"1110";
	 	return 0;
	 }
	 cout<<"1111";
	 return 0;
 }