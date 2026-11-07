#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<char> a;
	cin>>c1;
	for(int i=1;i<=3;i++){
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=1;i<=3;i++){
		cin>>s2[i];
	}
	if(c1==c2){
		cout<<1;
	} 
	else{
	    cout<<0<<0<<0<<0;
	    return 0;
	}
	for(int i=1;i<=3;i++){
	    a.insert(s1[i]);
	    a.insert(s2[i]);
	}
	if(a.size()==4){
	    cout<<1;
	}
	else{
		cout<<0<<0<<0<<endl;
		return 0;
	}
	if(((s1[3]>='A'&&s1[3]<='C')&&(s2[3]>='A'&&s2[3]<='C'))||((s1[3]>='D'&&s1[3]<='F')&&((s2[3]>='D'&&s2[3]<='F')))){
    	cout<<1;
    }
    else{
        cout<<0<<0;
        return 0;
	}
	if((s1[3]=='A'&&s2[3]=='B')||(s1[3]=='B'&&s2[3]<='C')||(s1[3]>='C'&&s1[3]<='B')||(s2[3]=='D'&&s2[3]=='F')||(s1[3]=='F'&&s2[3]=='D')||(s1[3]=='B'&&s2[3]<='A')){
    	cout<<1;
    }
    else{
    	cout<<0;
	}
	return 0;
}
