#include<bits/stdc++.h>
using namespace std;

string ic,zc,is,zs;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>ic>>is>>zc>>zs;
	if(ic==zc) cout<<1;
	else{
		cout<<"0000";
		return 0;
	} 
	bool f=1;
	for(int i=0;i<3;i++){
		if(i!=2&&zs[i]!=is[i]){
			cout<<"000";
			return 0;
		}
		if(i==2){
			cout<<1;
			if(is[i]>='A' && is[i]<='C' && zs[i]>='A' && zs[i]<='C'){
				cout<<1;
			}
			else if(is[i]>='D'&&is[i]<='F'&&zs[i]>='D'&&zs[i]<='F'){
				cout<<1;
			}
			else{
				cout<<"00";
				return 0;	
			} 
			char mi=min(is[i],zs[i]);
			char ma=max(is[i],zs[i]);
			if(mi+1==ma&&mi!='C'){
				cout<<1;
			}
			else cout<<0;
		}
	}
	return 0;
}