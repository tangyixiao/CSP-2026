#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans=0;
	if(c1==c2){
		ans+=1000;
		string p1;
		for(int i=0;i<=s1.size()-1;i++){
			if(s1[i]>='0'&&s1[i]<='9'){
				p1+=s1[i];
			}
		} 
		string p2;
		for(int i=0;i<=s2.size()-1;i++){
			if(s2[i]>='0'&&s2[i]<='9'){
				p2+=s1[i];
			}
		} 
		if(p1==p2){
			ans+=100;
			if(s1[-1]-'A'<=2){
				if(s2[-1]-'A'<=2){
					ans+=10;
					if(((s1[-1]-'A')-(s2[-1]-'A'))==1 || ((s1[-1]-'A')-(s2[-1]-'A'))==0){
						ans+=1;
					}
				}
			}else{
				if(s2[-1]-'A'>2){
					ans+=10;
					if(((s1[-1]-'A')-(s2[-1]-'A'))==1 || ((s1[-1]-'A')-(s2[-1]-'A'))==0){
						ans+=1;
					}
				}
			}
		}
	}
	cout<<ans;
    return 0;
}
