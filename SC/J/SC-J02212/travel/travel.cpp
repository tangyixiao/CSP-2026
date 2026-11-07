#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int fa = 1;
bool check(){
	if(s1[2] == 'C' && s2[2] == 'D'){
		return false;
	}
	if(s1[2] == 'D' && s2[2] == 'C'){
		return false;
	}
	return true;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int l1 = max(c1.size(),c2.size()),sl = s1.size();
	bool flag = false;
	for(int i = 0;i < l1;i++){
		if(c1[i] != c2[i] || c1.size() != c2.size()){
			cout<<0;
			cout<<0<<0<<0;
			return 0;
		}
	}
	if(!flag){
		cout<<1;
	}
	for(int i = 0;i < 2;i++){
		if(s1[i] != s2[i]){
			cout<<0<<0<<0;
			return 0;
		}
	}
	cout<<1;
	int aa = s1[2] - 'A';
	int bb = s2[2] - 'A';
	if((aa - bb == 1 || bb - aa == 1) && check()){
		cout<<1<<1;
		return 0;		
	}
	else{
		if(s1[2] < 'D' && s2[2] < 'D'){
			cout<<1<<0;
		}
		else{
			cout<<0<<0;
		}
	}
	return 0;	
} 