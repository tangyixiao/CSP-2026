#include <bits/stdc++.h>
using namespace std;
struct l{int a;char c;}; 
l arr[200001];
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>arr[i].a;
		cin>>arr[i].c;
	}
	for (int i=1,j=n;i<j;){
		if (arr[i].c==arr[j].c){
			if (arr[i].a>arr[j].a){
				arr[i].a-=arr[j].a;
				j--;
			}
			else if(arr[i].a<arr[j].a){
				arr[j].a-=arr[i].a;
				i++;
			}
			else{
				i++;
				j--;
			}
		}
		else{
			if (arr[i].a>arr[j].a){
				arr[i].a-=arr[j].a;
				ans+=arr[j].a;
				j--;
			}
			else if(arr[i].a<arr[j].a){
				arr[j].a-=arr[i].a;
				ans+=arr[i].a;
				i++;
			}
			else{
				ans+=arr[i].a;
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
