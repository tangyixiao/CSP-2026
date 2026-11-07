#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
char a,b;
int main()
{
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>a>>c2>>s2>>b;
	if(c1==01||c2==01||c1==16||c2==16){
		cout<<"0000";
		return 0;
	}
	if((c1==c2)&&(s1==s2&&a==b)){
		cout<<"1110";
		return 0;
	}
	if(c1==c2){
	cout<<1;
	if(s1==s2){
		cout<<1;
		if((a>='A'&&a<='C')&&(b>='A'&&b<='C')||(a>='D'&&a<='F')&&(b>='D'&&b<='F')){
        cout<<1;
    	if(a-b==1||a-b==-1){
    		cout<<1;
		}else cout<<"0";
    } else cout<<"00";
	}  else  cout<<"000";
	}else cout<<"0000";
	return 0;
	}

	
