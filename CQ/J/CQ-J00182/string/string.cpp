#include<bits/stdc++.h>
using namespace std;
int arr[100005];
char crr[100005];
int n;
long long cnt,m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d %c",&arr[i],&crr[i]);
		if(i>=n/2&&crr[n-i-1]!=crr[i]) cnt+=min(arr[i],arr[n-i-1]);
	}
	cout<<cnt;
	//anthropic openai保佑我
	//fable 5 gpt-6-astra保佑我
	
	return 0;
}
