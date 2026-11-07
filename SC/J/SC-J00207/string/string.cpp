#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
struct node{
	ll num;
	char ch;
}arr[N];
ll n,p,sum,cnt,ans;
ll i,j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i].num>>arr[i].ch;
		sum+=arr[i].num;
	}
	
	i=1,j=n;
	while(p<=sum/2 && i<j){
		if(arr[i].ch==arr[j].ch){
			if(arr[i].num>arr[j].num){
				p+=arr[j].num;
				arr[i].num-=arr[j].num;
				j--;
			}
			else if(arr[i].num==arr[j].num){
				p+=arr[j].num;
				i++,j--;
			}
			else{
				p+=arr[i].num;
				arr[j].num-=arr[i].num;
				i++;
			}
		}
		else{
			if(arr[i].num>arr[j].num){
				p+=arr[j].num;
				arr[i].num-=arr[j].num;
				ans+=arr[j].num;
				j--;
			}
			else if(arr[i].num==arr[j].num){
				p+=arr[j].num;
				ans+=arr[j].num;
				i++;
				j--;
			}
			else{
				p+=arr[i].num;
				arr[j].num-=arr[i].num;
				ans+=arr[i].num;
				i++;
			}
		}
	}
	
	cout<<ans;
	return 0;
}