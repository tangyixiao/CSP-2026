#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string s;
char t[N];
long long n,a[N],cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>t[i];
	}
	int i=1,j=n;
	while(i<=j){
		//cout<<t[i]<<"\n"<<a[i]<<"\n"<<t[j]<<"\n"<<a[j]<<"\n"<<i<<" "<<j<<"\n";
		if(t[i]==t[j]){
			if(a[i]==a[j]){
				i++;
				j--;
			}else{
				if(a[i]>a[j]){
					a[i]-=a[j];
					j--;
				}
				
				else if(a[i]<a[j]){
					a[j]-=a[i];
					i++;
				}
			}
		}else{
			if(a[i]==a[j]){
				cnt+=a[i];
				i++;
				j--;
			}else{
				if(a[i]>a[j]){
					cnt+=a[j];
					a[i]-=a[j];
					j--;
				}
				else if(a[i]<a[j]){
					cnt+=a[i]; 
					a[j]-=a[i];
					i++;
				}
			}
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
