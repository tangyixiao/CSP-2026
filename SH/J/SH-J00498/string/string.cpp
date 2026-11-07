#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
long long a[N];
char b[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	bool flag=1;
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		if(b[0]==b[1]){
			cout<<0;
			return 0;
		}
		else{
			if(a[0]==a[1]){
				if(a[0]%2==0){
					cout<<0;
					return 0;
				}
				else{
					cout<<1;
					return 0;
				}
			}
			else if(a[0]%2==0&&a[1]%2!=0){
				cout<<0;
				return 0;
			}
			else if(a[0]%2!=0&&a[1]%2==0){
				cout<<0;
				return 0;
			}
			else{
				cout<<1;
				return 0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			flag=0;
		}
	}
	if(flag==1){
		cout<<0;
		return 0;
	}
	return 0;
}
