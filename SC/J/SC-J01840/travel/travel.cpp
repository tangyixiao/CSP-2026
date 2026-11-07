#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int a,b,cnt=0,cmt=0,cun=0,cum=0;
    string c,s;
    cin>>a>>c>>b>>s;
    if(a==b) cnt=1;
    if(cnt==1&&c[0]==s[0] && c[1]==s[1]) 	cmt=1;
    if(cmt==1&&c[2]=='A'&&s[2]=='B') cun=1;
    if(cmt==1&&c[2]=='A'&&s[2]=='C') cun=1;
    if(cmt==1&&c[2]=='B'&&s[2]=='A') cun=1;
    if(cmt==1&&c[2]=='B'&&s[2]=='C') cun=1;
    if(cmt==1&&c[2]=='C'&&s[2]=='A') cun=1;
    if(cmt==1&&c[2]=='C'&&s[2]=='B') cun=1;
    if(cmt==1&&c[2]=='D'&&s[2]=='E') cun=1;
    if(cmt==1&&c[2]=='E'&&s[2]=='D') cun=1;
    if(cnt==1&&cmt==1&&cun==1&&char(c[2]+1)==char(s[2])) cum=1;
    if(cnt==1&&cmt==1&&cun==1&&char(c[2]-1)==char(s[2])) cum=1;
    cout<<cnt<<cmt<<cun<<cum<<'\n';
	fclose(stdin);
	fclose(stdout); 
    return 0;
}
