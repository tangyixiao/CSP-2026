#include<bits/stdc++.h>
using namespace std;
int t1,t2;
int n1,n2;
char c1,c2;
int cn1,cn2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//A65
	cin>>t1>>n1>>c1;
	cin>>t2>>n2>>c2;
	cn1=c1;
	cn2=c2;
	if(t1==t2){
		cout<<1;
		if(n1==n2){
			cout<<1;
			if((cn1<=67&&cn2<=67)||(cn1>=68&&cn2>=68)){
				cout<<1;
				if(cn1-cn2==1||cn1-cn2==-1) cout<<1;
				else cout<<0;
			}else cout<<"00";
			
		}else cout<<"000";
		
		
	}else cout<<"0000";
	//cout<<t1<<n1<<" "<<cn1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
