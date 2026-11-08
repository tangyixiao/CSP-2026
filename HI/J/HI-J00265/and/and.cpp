#include<bits/stdc++.h>
using namespace std;
int a,b,maxx,sum;
int timess=1;
int mm=1;
int t[200010];
int s[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>t[i];
	}
	
	for(int i=b;i>1;i--){
		mm*=i;
	}
	for(int j=a;j>b;j--){
		timess*=j;
	}
	timess/=mm;
	int i=1,m=1;
	if(b==1){
	for(int i=1;i<=a;i++){
		if(t[i]>=maxx){
			maxx=t[i];
		}
	}
	cout<<maxx;
	}else if(b==a){
		long long minn=pow(2,30);
		for(int i=1;i<=a;i++){
			if(t[i]<=minn){
				minn=t[i];
			}
		}
		cout<<minn;
	}else{
		for(int i=1;i<=a;i++){
			for(int j=1;j<=a;j++){
				if(t[i]|t[j]>=maxx){
					maxx=t[i]|t[j];
				}
			}
		}
		cout<<maxx;
	}
	return 0;
}
