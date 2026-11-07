#include<bits/stdc++.h>
using namespace std;
struct Node{
	long long a;
	char c;
};
Node x[200005],y[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].c;
		sum+=x[i].a;
	}
	for(int i=n;i>=1;i--){
		y[n-i+1].a=x[i].a;
		y[n-i+1].c=x[i].c;
	}
	int i=1,j=1;
	long long ans=0;
	while(x[i].a!=0 && y[j].a!=0){
		if(x[i].a>y[j].a){
			x[i].a-=y[j].a;
			if(x[i].c!=y[j].c){
				ans+=y[j].a;	
			}
			j++;
		}
		else if(x[i].a==y[j].a){
			if(x[i].c!=y[j].c){
				ans+=x[i].a;
			}
			i++;
			j++;
		}
		else{
			y[j].a-=x[i].a;
			if(x[i].c!=y[j].c){
				ans+=x[i].a;
			}
			i++;
		}
		if(x[i].a==0){
			ans+=y[j].a;
		}
		if(y[j].a==0){
			ans+=x[i].a;
		}
	}
	ans/=2;
	cout<<ans;
	return 0;
}