#include<bits/stdc++.h> 
using namespace std;
#define myubi return
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	long long cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=1,j=n;i<=j;){
		if(c[i]!=c[j]){
			if(a[i]>a[j]){
				cnt+=a[j];
				//cout<<a[j]<<" ";
				a[i]-=a[j];
				
				j--;
				
			}
			else if(a[i]==a[j]){
				cnt+=a[i];
				//cout<<a[i]<<" ";
				i++;
				j--;
			}
			else{
				cnt+=a[i];
				//cout<<a[i]<<" ";
				a[j]-=a[i];
				i++;
			}
		}
		else{
			//cout<<"gunmu"<<" ";
			if(a[i]>a[j]){
				//cout<<a[j]<<" ";
				a[i]-=a[j];				
				j--;
				
			}
			else if(a[i]==a[j]){
				//cout<<a[i]<<" ";
				i++;
				j--;
			}
			else{
				//cout<<a[i]<<" ";
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<cnt;
	myubi 0;
}