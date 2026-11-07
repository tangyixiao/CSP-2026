#include<bits/stdc++.h>
using namespace std;
int c1,c2;
char s1[2];
char s2[2]; 
int ans[3];
char s1w;
int w1;
int w2;
char s2w;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	for(int i=0;i<2;i++){
		cin>>s1[i];
	}
	cin>>s1w;
	if(s1w=='A'){
		w1=1;
	}
	if(s1w=='B'){
		w1=2;
	}
	if(s1w=='C'){
		w1=3;
	}
	if(s1w=='D'){
		w1=4;
	}
	if(s1w=='F'){
		w1=5;
	}
	cin>>c2;
	for(int i=0;i<2;i++){
		cin>>s2[i];
	}
	cin>>s2w;
	if(s2w=='A'){
		w2=1;
	}
	if(s2w=='B'){
		w2=2;
	}
	if(s2w=='C'){
		w2=3;
	}
	if(s2w=='D'){
		w2=4;
	}
	if(s2w=='F'){
		w2=5;
	}
	for(int i=0;i<4;i++){
		ans[i]=0;
	} 
	if(c1==c2)ans[0]=1;
	if(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1])ans[1]=1;
	if(c1==c2 && s1[0]==s2[0] && s1[1]==s2[1]){
	if(w1==1){
		if(w2==2||w2==3){
			ans[2]=1;
		} 
	}
	if(w1==2){
		if(w2==1||w2==3){
			ans[2]=1;
		} 
	}
	if(w1==3){
		if(w2==2||w2==1){
			ans[2]=1;
		} 
	}
	if(w1==4){
		if(w2==5){
			ans[2]=1;
		} 
	}
	if(w1==5){
		if(w2==4){
			ans[2]=1;
		} 
	}
	}	
	if(ans[2]==1){
		if(w1-w2==1||w1-w2==-1){
			ans[3]=1;
		}
	}
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	return 0;
} 