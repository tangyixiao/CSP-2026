#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
int main(){
	cin>>c1>>s1>>c2>>s2;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1[1]==s2[1]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1[1]==s2[1]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s[2]=="A"&&s[2]=="B"&&c1==c2){
		cout<<"1";
		}else{
			cout<<"0";
	}else if(s[2]=="A"&&s[2]=="C"){
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="F"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="C"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="F"){
		cout<<"0";
	}else if(s[2]=="C"&&s[2]=="D"&&c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}else if(s[2]=="C"&&s[2]=="F"&&c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}else if(s[2]=="D"&&s[2]=="F"&&c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="A"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="B"){
		cout<<"0";
	}else if(s[2]=="D"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="F"&&s[2]=="F"){
		cout<<"0";
	}
	if(s[2]=="A"&&s[2]=="B"){
		cout<<"1";
	}else if(s[2]=="A"&&s[2]=="C"){
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="F"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="C"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="F"){
		cout<<"0";
	}else if(s[2]=="C"&&s[2]=="D"){
		cout<<"1";
	}else if(s[2]=="C"&&s[2]=="F"){
		cout<<"1";
	}else if(s[2]=="D"&&s[2]=="F"){
		cout<<"1";
	}else if(s[2]=="A"&&s[2]=="A"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="B"){
		cout<<"0";
	}else if(s[2]=="D"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="F"&&s[2]=="F"){
		cout<<"0";
	}
	if(s[2]=="A"&&s[2]=="B"){
		cout<<"1";
	}else if(s[2]=="A"&&s[2]=="C"){
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="A"&&s[2]=="F"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="C"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="F"){
		cout<<"0";
	}else if(s[2]=="C"&&s[2]=="D"){
		cout<<"1";
	}else if(s[2]=="C"&&s[2]=="F"){
		cout<<"1";
	}else if(s[2]=="D"&&s[2]=="F"){
		cout<<"1";
	}else if(s[2]=="A"&&s[2]=="A"){
		cout<<"0";
	}else if(s[2]=="B"&&s[2]=="B"){
		cout<<"0";
	}else if(s[2]=="D"&&s[2]=="D"){
		cout<<"0";
	}else if(s[2]=="F"&&s[2]=="F"){
		cout<<"0";
	}
	return 0;
}
