#include<bits/stdc++.h>
using namespace std;
int num[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>c[i];
	}
	for(int i=1,j=n;i<j;){
		if(c[i]==c[j]){
			if(num[i]>num[j]){
				num[i]-=num[j];
				j--;
			}else if(num[i]==num[j]){
				i++;
				j--;
			}else{
				num[j]-=num[i];
				i++;
			}
		}else{
			if(num[i]>num[j]){
				cnt+=num[j];
				num[i]-=num[j];
				j--;
			}else if(num[i]==num[j]){
				cnt+=num[j];
				i++;
				j--;
			}else{
				cnt+=num[i];
				num[j]-=num[i];
				i++;
			}
		}
	}
	cout<<cnt;
}
