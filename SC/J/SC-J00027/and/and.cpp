#include<bits/stdc++.h>
using namespace std;
long long n,m,sum=-1,a[220000];
string s[220000];
string f(long long x){
	string q=" ";
	while(x>0){
		char c=(x%2)+'0';
		q=c+q;
		x/=2;
	}
	return q;
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	long long mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=f(a[i]);
		//cout<<s[i]<<"\n";
		s[i]=' '+s[i];
		long long kk=s[i].size()-2;
		mx=max(mx,kk);
	}
	for(int i=1;i<=mx;i++){
		int k=0;
		for(int j=1;j<=n;j++){
			if(s[j].size()-2>=mx-i+1&&s[j][i]=='1'){
				k++;
			}
		}
		if(k>=m){
			for(int j=1;j<=n;j++){
				if(!(s[j].size()-2>=mx-i+1&&s[j][i]=='1')){
					s[j]="";
				}
			}	
		}
	}
	int w=0;
	for(int i=1;i<=n;i++){
		if(s[i].size()>=2){
			w++;
			if(sum==-1){
				sum=a[i];
			}else{
				sum=sum&a[i];
			}
		}
		if(w>=m){
			break;
		}
	}
	cout<<sum;
	return 0;
}