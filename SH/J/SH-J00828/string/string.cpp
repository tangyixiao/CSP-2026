#include <bits/stdc++.h>
using namespace std;

string st="",tp="";
long long le=0,ans=0;

int main(){

    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    int n;
    cin>>n;
    while(n--){
    	int x;
    	cin>>x>>tp;
    	le=le+x;
    	while(x--){
    		st=st+tp;
		}
	}
	//cout<<st<<le;
	if(le%2==0){
		for(int i=0;i<=le/2-1;i++){
			if(st[i]!=st[le-1-i]) ans++;
		}
		cout<<ans;
		return 0;
	}else{
		for(int i=0;i<=((le-1)/2)-1;i++){
			if(st[i]!=st[le-1-i]) ans++;
		}
		cout<<ans;
		return 0;
	}



    return 0;
}
