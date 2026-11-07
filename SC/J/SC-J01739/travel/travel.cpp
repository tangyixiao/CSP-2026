#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int ocean=s1[2],amy=s2[2];
			if(('A'<=ocean&&ocean<='C'&&'A'<=amy&&amy<='C')||('D'<=ocean&&ocean<='E'&&'D'<=amy&&amy<='E')){
				cout<<1;
				if('D'<=ocean&&ocean<='E'&&'D'<=amy&&amy<='E'){
					cout<<1;
					return 0;
				}
				if('A'<=ocean&&ocean<='C'&&'A'<=amy&&amy<='C'){
					if(abs(ocean-amy)==1){
						cout<<1;
						return 0;
					}
				}
				cout<<0;
				return 0;
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
}