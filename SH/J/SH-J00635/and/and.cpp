#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int t=a[1],h=0,ans=a[1];
	int b[100006]={0};
	int k=0;
	while(t>1){
		k++;
		b[k]=t;
		if(h==m){
			break;
		}
		for(int i=1;i<=n;i++){
			if(a[i]<t){
				break;
			}else if(a[i]==t){
				h++;
				ans=a[i];
			}
		}
		if(t%2==1){
			t--;
		}
		t/=2;
	}
	if(h>=m){
		cout<<ans;
		return 0;
	}
	cout<<ans; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
