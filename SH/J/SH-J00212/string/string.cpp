#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	char c[200005]={};
	int u[200005]={};
	int x[200005]={};
	long long int ans=0;
	//cout<<222;
	for(int i=1;i<=n;i++){

		cin>>x[i]>>c[i];
	//	cout<<x[i]<<c[i];		
	}
	int li=1,ri=n;
	while(li<=ri){
	//	cout<<1; 
		int ls=x[li]-u[li];
		int rs=x[ri]-u[ri];
		//cout<<li<<' '<<x[li]<<' '<<u[li]<<' '<<ls<<' '<<ri<<' '<<x[ri]<<' '<<u[ri]<<' '<<rs<<'\n';		
		if(c[li]!=c[ri]){
	//		cout<<2;

			if(ls>rs){
				u[li]+=rs;
				u[ri]=x[ri];
				ri--;
				ans+=rs;
			}else if(ls<rs){
				u[ri]+=ls;
				u[li]=x[li];
				li++;
				ans+=ls;
			}else{
				u[li]=x[li];
				u[ri]=x[ri];
				li++;
				ri--;
				ans+=ls;
			}
			//cout<<ans<<'\n';
		}else{		
	//		cout<<3;
			if(ls>rs){
				u[li]+=rs;
				u[ri]=x[ri];
				ri--;
				//ans+=rs;
			}else if(ls<rs){
				u[ri]+=ls;
				u[li]=x[li];
				li++;
				//ans+li;
			}else{
				u[li]=x[li];
				u[ri]=x[ri];
				li++;
				ri--;
				//ans+=ls;
			}	
			//cout<<ans<<'\n';
		}
	}
	cout<<ans;
	return 0;
}

