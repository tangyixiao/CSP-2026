#include<bits/stdc++.h>
using namespace std;
string s="1101120110112";
int a[6];
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	getline(cin,str);
	for(int i=0,j=0;i<13;i++){
		if(s[i]-'0'==1){
			a[j]*=10,a[j]+=str[i]-'0';
		}
		if(s[i]-'0'==2){
			j++;
			a[j]=str[i]-'A';
		}
		if(s[i]-'0'==0){
			j++;
		}
	}
	if(a[0]==a[3]){
		cout<<'1';
		if(a[1]==a[4]){
			cout<<'1';
			if((a[2]<3&&a[5]<3)||(a[2]>2&&a[5]>2)){
				cout<<'1';
				if(abs(a[2]-a[5])==1)	cout<<'1';
				else	cout<<'0';
			}else	cout<<"00";
		}else	cout<<"000";
	}else	cout<<"0000";
	return 0;
}
