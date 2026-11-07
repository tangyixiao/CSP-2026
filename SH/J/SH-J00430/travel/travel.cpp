#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	for(int i=0;i<a.size();i++){
        if(a[i]!=c[i]){
            cout<<"0000";
            return 0;
        }
	}
	cout<<1;
	for(int i=0;i<=1;i++){
        if(b[i]!=d[i]){
            cout<<"000";
            return 0;
        }
	}
	cout<<1;
	if(d[2]<=67&&b[2]<=67||b[2]>67&&b[2]<=69&&d[2]>67&&d[2]<=69) cout<<1;
	else{
        cout<<"00";
        return 0;
    }
    if(abs(d[2]-b[2])==1) cout<<1;
    else cout<<0;
	return 0;
}
