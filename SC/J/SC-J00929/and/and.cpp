#include<bits/stdc++.h>
using namespace std;
long long n,m,cnt,ans,w=2;
long long a[200005],b[200005];
int ci(long long x){
	for(int i=1;i<=30;i++){
		if(pow(2,i)<=x&&pow(2,(i+1))>x)return i;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	//cout<<(4>>2);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=ci(a[i]);
		//cout<<b[i]<<" ";
		
		}

	/*for(int i=1;i<=n;i++){
		cnt=a[i];
		for(int j=i+1;j<=n;j++){
			for(int k=j;k<=m-1;k++)cnt=cnt&a[k];
		}
		ans=max(ans,cnt);
	}*/
	//for(int i=1;i<=n;i++)cout<<b[i]<<" "; 
		for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<=a[j]){
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
		}
	}
	//for(int i=1;i<=n;i++)cout<<b[i]<<" "; 
	ans=a[1];
	int h=1;
	while(h<=n){
		if(a[h]!=1&&a[h+1]!=1){
			if((pow(2,b[h])==a[h])&&(pow(2,b[h+1])==a[h+1])){
			ans=a[h+2];
			w=h+3;
			h+=2; 
		}
			if((n-w)<(m-2)){
				cout<<0;
				return 0;
		}
		}
		
		h++;
	}
//	cout<<h<<" "<<w<<" "<<ans<<endl;	
		while(w<=m){
			if(ans&a[w]==0){
				w++;
				m+=1;
			}
			if(m>n){
				w--;
				m-=1;
			}
			ans=(ans&a[w]);
			w++;
		}
	cout<<ans;
	
	return 0;
}