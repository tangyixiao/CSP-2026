#include<bits/stdc++.h>
using namespace std;
int arr[200005][2];
int main(){
	long long n;
	freopen("string1.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	char guo;
	long long cut=0,cnt=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i][0];
		cin>>guo;
		arr[i][1]=guo-'0';
		cut+=arr[i][0];
	}
	int a_;
	if(n%2==1) a_=1;
	else a_=0;
	int p=n/2,q=1+n/2+a_;
	for(int i=1;i<=n/2+a_;i++){
		int shu=0;
		if(arr[p][1]==arr[q][1]){
			shu=max(arr[p][0],arr[q][0])-min(arr[p][0],arr[q][0]);
			arr[p][0]-=shu;
			arr[q][0]-=shu;
			if(arr[p][0]==0) p-=1;
			if(arr[q][0]==0) q+=1;
		}
		else{
			shu=max(arr[p][0],arr[q][0])-min(arr[p][0],arr[q][0]);
			if(shu==0){
				shu=arr[p][0];
			}
			arr[p][0]-=shu;
			arr[q][0]-=shu;
			if(arr[p][0]==0) p-=1;
			if(arr[q][0]==0) q+=1;
			
			cnt+=shu;
		}
	}
	cout<<cnt;
	return 0;
}
