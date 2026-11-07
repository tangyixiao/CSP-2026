#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,c2;
    string s1[3];
    string s2[3];
    cin >> c1 ;
    for(int i=0;i<3;i++){
    	cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<3;i++){
		cin>>s2[i];
	}
    int cnt;
    if(c1=c2){
    	cnt=1;
	}else{
		cnt=0;
	}if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cnt+=1;
	}else{
		cnt+=0;
	}if(s1[2]==s2[2]){
		cnt+=1;
	}else{
		cnt+=0;
	}
	cnt+=1;
    cout<<cnt;
    return 0;
}
