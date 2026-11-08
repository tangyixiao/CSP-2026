#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[10000],b[1090],c[10001],d[100001];
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
		
		if(b[0]==d[0]&&d[1]==b[1]){
			cout<<1;
			int o=int(b[2]+d[2]);
			if((o>=131&&o<=133)||o==137){
				cout<<1;
				if(o==131||o==133||o==137){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}

