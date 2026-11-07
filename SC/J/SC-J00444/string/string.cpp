#include<bits/stdc++.h>
using namespace std;
long long n;
char letters[200100];
long long nums[200100];
char strings[200000000000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nums[i]>>letters[i];
	}
	long long k=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nums[i];++j){
			strings[nums[i-1]+j]=letters[i];
			k++;
		}
	}
	long long flag=0;
	for(int i=1;i<=n;i++){
		if(strings[i]!=strings[k+1-i]) flag++;
	}
	cout<<flag;
	return 0;
}