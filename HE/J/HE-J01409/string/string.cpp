#include<bits/stdc++.h>
using namespace std;
string s,c,q,w;
long long n,b,a[200005],ct=0,num,k=1;
char d[200005],m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b>>m;
		if(m==d[ct]){
			a[ct]+=b;
		}
		else{
			ct++;
			d[ct]=m;
			a[ct]=b;
		}
	}
	while(k<ct){
		if(d[k]==d[ct]){
			if(a[k]>a[ct]){
				a[k]-=a[ct];
				ct--;
			}
			else if(a[k]<a[ct]){
				a[ct]-=a[k];
				k++;
			}
			else{
				ct--;
				k++;
			}
		}
		else{
			if(a[k]>a[ct]){
				a[k]-=a[ct];
				num+=a[ct];
				ct--;
			}
			else if(a[k]<a[ct]){
				a[ct]-=a[k];
				num+=a[k];
				k++;
			}
			else{
				num+=a[k];
				ct--;
				k++;
			}
		}
	}
	cout<<num;
	return 0;
}
