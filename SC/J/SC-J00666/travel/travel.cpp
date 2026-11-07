#include <bits/stdc++.h>
using namespace std;
int cxr1=0,cxr2=0;
string zrs1,zcr2;
char datadd[5]={'A','B','C','D','F'};
string anstravle[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>cxr1>>zrs1>>cxr2>>zcr2;
	if(cxr1==cxr2){
	anstravle[0]="1";
	}
	else{
		anstravle[0]="0";
	}
	if(anstravle[0]=="1"&&zrs1[0]==zcr2[0]&&zrs1[1]==zcr2[1]){
		anstravle[1]="1";
		if(zrs1[2]<='C'&&zcr2[2]<='C'){
		anstravle[2]="1";
		anstravle[3]="0";
		int zwr=0,zwx=0;
		for(int i=0;i<5;i++){
			if(zrs1[2]==datadd[i]){
				zwr=i;
			}
			if(zcr2[2]==datadd[i]){
				zwx=i;
			}
		}
	if(zwx-zwr==-1||zwx-zwr==1){
			anstravle[3]="1";
			}
		}
		else{
			anstravle[2]="0";
			anstravle[3]="0";
		}
	}
	else{
		anstravle[1]="0";
		anstravle[2]="0";
		anstravle[3]="0";
	}
	for(int i=0;i<4;i++){
		cout<<anstravle[i];
	} 
	return 0;
}