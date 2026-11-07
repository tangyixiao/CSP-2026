#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n;
	long long m;
	cin>>n>>m;
	long long a[10010];
	long long p[8010][31];
	for(int q=1;q<=n;q++){
		cin>>a[q];
	}
	long long max=-1;
	for(int q=1;q<=n;q++){
		if(a[q]>max){
			max=a[q];
		}
	}
	for(int x=1;x<=n;x++){
		int s[100]={0};
		long long i=1;
		long long k=0;
		while(i<=a[x]){
			i*=2;
			k++;
		}
		i/=2;
		k--;
		for(int j=k;j>=0;j--){
			if((i<=a[x])&&(a[x]>0)){
				a[x]-=i;
				s[j]=1;
			}
			else{
				s[j]=0;
			}
			i/=2;
		}
		for(int y=1;y<=30;y++){
			p[x][y]=s[y-1];
		}
	}
	if(m==1){
		cout<<max<<endl;
	}
	else if(m==n){
		long long ans;
		long long z=1;
		for(int x=1;x<=n;x++){
			bool b=true;
			for(int y=1;y<=30;y++){
				if(p[x][y]==0){
					b=false;
				}
			}
			if(b==true){
				ans+=z;
			}
			z*=2;
		}
		cout<<ans<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
