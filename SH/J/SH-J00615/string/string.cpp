#include<bits/stdc++.h>
using namespace std;
struct zyxissb_node{
	int num;
	char c;
};
int zyxissb_n;
zyxissb_node zyxissb_str[200001];
int main(){	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>zyxissb_n;
	for(int i=1;i<=zyxissb_n;i++){
		cin>>zyxissb_str[i].num>>zyxissb_str[i].c;
	}
    string zyxissb_s="";
    for(int i=1;i<=zyxissb_n;i++){
    	for(int j=1;j<=zyxissb_str[i].num;j++){
    		zyxissb_s+=zyxissb_str[i].c;
		}
	}
	//cerr<<zyxissb_s;
	int zyxissb_ans=0;
	int n=zyxissb_s.length();
	for(int i=1;i<=n/2;i++){
		if(zyxissb_s[i-1]!=zyxissb_s[n-i])zyxissb_ans++;
	}
	cout<<zyxissb_ans<<endl;
	return 0;
}

