#include<bits/stdc++.h>
 using namespace std;
 int main(){
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	string a,ad,b,bd;
 	cin>>a>>ad>>b>>bd;
 
 	if(a[0]==b[0]&&a[1]==b[1]){
 		cout<<1;
	 }else{
	 	cout<<"0000";
	 	return 0;
	 }if(ad[0]==bd[0]&&ad[1]==bd[1]){
	 	cout<<1;
	 }else{
	 	cout<<"000";
	 	return 0;
	 }
	 if(ad[2]<'D'&&bd[2]<'D'){
	 	cout<<1;
	 }else if(ad[2]>='D'&&bd[2]>='D'){
	 	cout<<1;
	 }else{
	 	cout<<"00";
	 	return 0;
	 }
	 if(ad[2]+1==bd[2]||ad[2]-1==bd[2]){
	 	cout<<1;
	 }else{
	 	cout<<0;
	 }

	
		return 0;
}
