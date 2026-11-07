#include<bits/stdc++.h>
using namespace std;
int cnt=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	for(int i=1;i<=2;i++)
	{
		cin>>a1[i];
	}
	for(int i=1;i<=3;i++)
	{
		cin>>a2[i];
	}
	for(int i=1;i<=2;i++)
	{
		cin>>b1[i];
	}
	for(int i=1;i<=3;i++)
	{
		cin>>b2[i];
	}
	for(int i=1;i<=2;i++){
		if(a1[i]!=b1[i]){
			cnt=0;
		}
	}
	if(cnt==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	cnt=1;
	for(int i=1;i<=2;i++){
		if(a2[i]!=b2[i]){
			cnt=0;
		}
	}
	if(cnt==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	cnt=1;
	if(a2[3]=='A'&&b2[3]=='B'){
		cnt=1;
	}
	if(a2[3]=='A'&&b2[3]=='C'){
		cnt=1;
	}
	if(a2[3]=='B'&&b2[3]=='C'){
		cnt=1;
	}
	if(a2[3]=='B'&&b2[3]=='A'){
		cnt=1;
	}
	if(a2[3]=='C'&&b2[3]=='A'){
		cnt=1;
	}
	if(a2[3]=='C'&b2[3]=='B'){
		cnt=1;
	}
	if(a2[3]=='D'&b2[3]=='F'){
		cnt=1;
	}
	if(a2[3]=='F'&&b2[3]=='D'){
		cnt=1;
	}
	else{
		cnt=0;
	}
	if(cnt==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	cnt=1;
	if(a2[3]=='A'&&b2[3]=='B'){
		cnt=1;
	}
	if(a2[3]=='B'&&b2[3]=='C'){
		cnt=1;
	}
	if(a2[3]=='C'&&b2[3]=='B'){
		cnt=1;
	}
	if(a2[3]=='B'&b2[3]=='A'){
		cnt=1;
	}
	if(a2[3]=='D'&&b2[3]=='F'){
		cnt=1;
	}
	if(a2[3]=='F'&&b2[3]=='D'){
		cnt=1;
	}
	else{
		cnt=0;
	}
	if(cnt==1){
		cout<<1;
	}
	else{
		cout<<0;
	}
} 

			
				
				
