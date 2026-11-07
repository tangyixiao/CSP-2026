#include<bits/stdc++.h>
using namespace std;
/*W.D.Gaster in deltarune
Built it all from an empty room*/
int n,m,a[500005],ondesktop[300005],sum=0;
stack<int> desktop;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i;i<n;j++){
			if(ondesktop[a[j]]==1){
				while(desktop.top()==a[j])desktop.pop();
				desktop.pop();
			}
			desktop.push(a[j]);
			ondesktop[j]=1;
		}
		while(!desktop.empty()){
			if(desktop.top()==i)sum++;
			desktop.pop();
		}
	}
	cout<<sum;
}
