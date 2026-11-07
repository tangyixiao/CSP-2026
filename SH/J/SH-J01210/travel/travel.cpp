#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	int cnt1=0,cnt2=0;
	char l1,l2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			cnt1*=10;
			cnt1+=s1[i]-'0';
		}else l1=s1[i];
		if(s2[i]>='0'&&s2[i]<='9'){
			cnt2*=10;
			cnt2+=s2[i]-'0';
		}else l2=s2[i];
	}
	if(cnt1==cnt2)cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(l1<='C'&&l2<='C')cout<<1;
	else if(l1>'C'&&l2>'C')cout<<1;
	else{
		cout<<0<<0;
		return 0;
	}
	if(abs(l1-l2)==1&&(l1!='C'&&l2!='C'))cout<<1;
	else cout<<0;
	return 0;
}
