#include<iostream>
#include<string>
using namespace std;
const long long cd=100000001;
int n;
int a[cd];
char c[cd];
int zs;
int r;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		zs+=a[i];
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	int k=zs-1;
	if(zs%2==0){
		zs/=2;
	}
	else{
		zs-=1;
		zs/=2;
	}
	if((k+1)%2==0)
	{
		for(int i=0;i<zs;i++)
		{
			if(k<zs){
				break;
			}
			if(s[i]!=s[k]){
				r++;
				k--;
			}
			else{
				k--;
			}
		}
	}
	else
	{
		for(int i=0;i<=zs;i++)
		{
			if(k<=zs){
				break;
			}
			if(s[i]!=s[k]){
				r++;
				k--;
			}
			else{
				k--;
			}
		}	
	}
	cout<<r;
	return 0;
}