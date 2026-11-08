#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	vector<int>s1(3);
	vector<int>s2(3);
	vector<int>c1(3);
	vector<int>c2(3);
	for(int i=1;i<=1;i++){
		cin>>c1[i]>>s1[i]>>c2[i]>>s2[i];
		cout<<c1[i]<<" "<<s1[i]<<" "<<c2[i]<<" "<<s2[i]<<endl;
	}
	int n=c1.size();
	for(int i=1;i<=n;i++){
		if(c1[1]*10+c1[2]==c2[1]*10+c2[2]){
			cout<<"1";
		}
		else{
			cout<<"0000";
			return 0;
		}
    }
	int len=s1.size();
	for(int i=1;i<=len;i++){
		if(s1[1]*10+s1[2]==s2[1]*10+s2[2]){
			cout<<"1";
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	for(int i=1;i<=len;i++){
		if((s1[3]=='D'||s1[3]=='F')&&(s2[3]=='D'||s2[3]=='F')){
			cout<<"1";
		}
		else{
			if((s1[3]=='A'||s1[3]=='B'||s1[3]=='C')&&(s2[3]=='A'||s2[3]=='B'||s2[3]=='C')){
				cout<<"1";
			}
			else{
				cout<<"00";
				return 0;
			}
		}
	}
	for(int i=1;i<=len;i++){
		if((s1[3]=='D'&&s2[3]=='F')||(s1[3]=='F'&&s2[3]=='D')||(s1[3]=='A'&&s2[3]=='B')||(s1[3]=='B'&&s2[3]=='A')||(s1[3]=='B'&&s2[3]=='C')||(s1[3]=='C'&&s2[3]=='B')){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
} 
