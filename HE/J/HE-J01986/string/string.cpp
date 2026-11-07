#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	string c[9999]={""},S;
	long long n,a[9999]={0},m,j=0,q=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		
	}
	for(int i=0;i<n;i++)   m+=a[i]; 
	m--;
	for(int i=0;i<n;i++){
		for(int v=0;v<a[i];v++){
			S+=c[i];
		}
	}
	j=0;
		for(int i=0;i<m/2;i++){
			if(S[i]!=S[m-i]){
				j++;
			}
		}
    for(int i=0;i<m;i++){
    	if(S[i]!=S[0]){
    		break;
		}else{
			q++;
		}
	}
	if(q==m){
		j--;
	}
		cout<<j;
}
