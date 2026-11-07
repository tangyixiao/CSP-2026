#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>mp;
int a[6] = {0,1,1,1,2,2};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	mp['A'] = 1;
	mp['B'] = 2;
	mp['C'] = 3;
	mp['D'] = 4;
	mp['F'] = 5;
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	//cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
	string ans = "";
	if(c1 == c3){
		ans+='1';
		bool f = true;
		for(int i = 0;i<2;i++){
			if(c2[i]!=c4[i]){
				f = false;
				break;
			}
		}
		if(f){
			ans+='1';
			if(a[c2[2]-'A'] == a[c4[4]-'A']){
				ans+='1';
				if(mp[c2[2]] == mp[c4[2]]-1||mp[c2[2]] == mp[c4[2]]+1){
					ans+='1';
				}else{
					ans+='0';
				}
			}else{
				ans+="00";
			}
		}else{
			ans+="000";
		}
	}else{
		ans+="0000";
	}
	
			
					
	cout<<ans;
}
