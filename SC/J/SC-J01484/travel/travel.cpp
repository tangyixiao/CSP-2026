#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ans[4]={0};
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans[0]=1;
		int s11=s1[0]-'0',s12=s1[1]-'0',s21=s2[0]-'0',s22=s2[1]-'0';
		if(s11*10+s12==s21*10+s22){
			ans[1]=1;
			int s13=s1[2]-65,s23=s2[2]-65;
			cout<<s13<<s23;
			if((s13<3&&s23<3)||(s13>=3&&s23>=3)){
				ans[2]=1;
				if(s13>=3&&s23>=3){
					ans[3]=1;
				}else if(s13+s23!=2){
					ans[3]=1;
				}
			} 
		}
	}
	for(int i=0;i<=3;i++){
		cout<<ans[i];
	}
	return 0;
}