#include<bits/stdc++.h>
using namespace std;

char c[200005];
long long num[200005],n,l=1,r,dqlxb=1,dqrxb,dqlsy,dqrsy,ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>c[i];
		r+=num[i];
	}
	dqrxb=n;
	dqlsy=num[1];
	dqrsy=num[n];
	while(dqlxb<dqrxb){
		if(c[dqrxb]!=c[dqlxb]){
			if(dqlsy<dqrsy){
				ans+=dqlsy;
				dqrsy-=dqlsy;
				dqlsy=num[++dqlxb];
			}else if(dqlsy>dqrsy){
				ans+=dqrsy;
				dqlsy-=dqrsy;
				dqrsy=num[--dqrxb];
			}else{
				ans+=dqrsy;
				dqrsy=num[--dqrxb];
				dqlsy=num[++dqlxb];
			}
		}else{
			if(dqlsy<dqrsy){
				dqrsy-=dqlsy;
				dqlsy=num[++dqlxb];
			}else if(dqlsy>dqrsy){
				dqlsy-=dqrsy;
				dqrsy=num[--dqrxb];
			}else{
				dqrsy=num[--dqrxb];
				dqlsy=num[++dqlxb];
			}
		}
	}
	cout<<ans;
	return 0;
}
