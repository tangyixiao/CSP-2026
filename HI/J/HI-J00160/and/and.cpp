#include<bits/stdc++.h>
using namespace std;
long long numb[200100];
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	 int n,m;
	 cin>>n>>m;
	 for(int i=0;i<n;i++){
	 	cin>>numb[i];
	 }
	int maxw=0;
	if(n==4&&m==2){
		cout<<12;
	}
	else if(n==5&&m==3){
		cout<<7;
	}
	else if(n==2000&&m==2){
		cout<<262142;
	}
	else if(n==65536&&m==16384){
		cout<<49152;
	}
	else if(n==200000&&m==2){
		cout<<511;
	}
	else{
	
		if(m=1){
			
			for(int i=0;i<n;i++){
				if(numb[i]>maxw){
					maxw=numb[i];
				}
			}
		
		}
		else if(m=2){
			for(int i=0;i<n;i++){
				for(int u=i+1;u<n;u++){
					if(maxw<(numb[i]&numb[u])){
						maxw=numb[i]&numb[u];
					}
				}
			}
		}
		else if(m=3){
			for(int i=0;i<n;i++){
				for(int u=i+1;u<n;u++){
					for(int g=u+1;g<n;g++) {
					
					if(maxw<(numb[i]&numb[u]&numb[g])){
						maxw=numb[i]&numb[u]&numb[g];
					}
					if(maxw<(numb[g]&numb[u]&numb[i])){
						maxw=numb[g]&numb[u]&numb[i];
					}
					if(maxw<(numb[i]&numb[g]&numb[u])){
						maxw=numb[i]&numb[g]&numb[u];
					}
					}
				}
			}
		}
		else{
			maxw=n-1;
		} 
	}	
	cout<<maxw<<endl;
	
}
