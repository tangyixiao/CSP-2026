#include<iostream>
#include<algorithm>
using namespace std;
int no[300000]={0},a[500000],noo[300000];
bool noop[300000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int l=0;
		for(int j=0;j<m;j++)noop[j]=0;
		for(int j=i;j<n;j++){
			if(noop[a[j]-1]==1)l=0;
			else noop[a[j]-1]=1;
			noo[l]=a[j],l++;
		}
		for(int j=0;j<l;j++){
			++no[noo[j]-1];
		}
	}
	for(int i=0;i<m;i++)cout<<no[i]<<" ";
	return 0;
} 
