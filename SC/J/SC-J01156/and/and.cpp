#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	scanf("%d%d",&a,&b); 
	int s[a];
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
	}
	int max=0;
	for(int i=0;i<a;i++){
		int kp=0;
		int maxi=0;
		for(int j=i+1;j<a;j++){
			if(maxi<s[i]&s[j])maxi=s[i]&s[j];
		}
		kp=maxi;
		for(int k=0;k<b-1;k++){
			int map=0;
			for(int j=i+1;j<a;j++){
				if(map<kp&s[j])map=kp&s[j];
			}
			kp=map;
		}
		if(max<kp)max=kp;
	}
	printf("%d",max);
} 