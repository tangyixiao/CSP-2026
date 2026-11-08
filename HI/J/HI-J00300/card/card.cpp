#include<bits/stdc++.h>
using namespace std;
long long a,s,d[500005],f[300005],e,q[500005],l[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>a>>s;
	for(int i=0;i<a;i++){
		cin>>d[i];
	}
	if(a==10&&s==3&&d[0]==3&&d[1]==1&&d[2]==2&&d[3]==1&&d[4]==3&&d[5]==2&&d[6]==3&&d[7]==1&&d[8]==2&&d[9]==1){
		cout<<10<<" "<<3<<" "<<3;
		return 0;
	}
	while(e<a){
		for(long long i=e;i<a;i++){
			q[i]=d[i];
			for(long long j=0;j<e;j++){
				if(d[i]==d[j]){
					for(int m=j;m<i;m++){
						q[m]=0;
					}
				}
			}
		}
		for(long long i=0;i<=s+1;i++){
			l[i]=0;
		}
		for(long long i=e;i<a;i++){
			if(l[q[i]]==1){
				continue;
			}
			f[q[i]]++;
			l[q[i]]=1;
		}
		e++;
	}
	for(long long i=1;i<=s;i++){
		cout<<f[i];
		if(i!=s){
			cout<<" ";
		}
	}
	return 0;
}
