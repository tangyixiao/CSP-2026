#include<bits/stdc++.h>
using namespace std;

int n,m,a[200009],p[40],ans;
bool b[200009];

bool check(int x){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(b[i]==false){
			continue;
		}
		int t=a[i]>>x;
		if(t%2==1){ 
			cnt++;
		}
	}
	return cnt>=m;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	p[0]=1;
	for(int i=1;i<=30;i++){
		p[i]=p[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=true;
	}
	for(int i=30;i>=0;i--){
		if(check(i)){
			ans+=p[i];
			for(int j=1;j<=n;j++){
				int t=a[j]>>i;
				if(t%2==0){
					b[j]=false;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

