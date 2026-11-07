#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int c11,c22,s11[2],s22[2],ans[5];
int f(char a){
	if(a=='F') return 5;
	return a-'A'+1;
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1;
    c11=(c1[0]-'0')*10+c1[1]-'0';
    cin>>s1;
    s11[0]=(s1[0]-'0')*10+s1[1]-'0';
    s11[1]=f(s1[2]);
    cin>>c2;
    c22=(c2[0]-'0')*10+c2[1]-'0';
    cin>>s2;
    s22[0]=(s2[0]-'0')*10+s2[1]-'0';
    s22[1]=f(s2[2]);
    if(c11==c22) ans[1]=1;
    if(c11==c22&&s11[0]==s22[0]) ans[2]=1;
    if(c11==c22&&s11[0]==s22[0]&&((s11[1]<=3&&s22[1]<=3)||(s11[1]>3&&s22[1]>3))) ans[3]=1;
    if(ans[3]==1&&abs(s11[1]-s22[1])==1) ans[4]=1;
    for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
}