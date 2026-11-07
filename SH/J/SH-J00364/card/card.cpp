#include<bits/stdc++.h>
using namespace std;
int arr[(const int)(5E5+10)],ans[(const int)(3E5+10)]; 
int main(){
	FILE *fin,*fout;
	fin=fopen("card.in","r");
	fout=fopen("card.out","w");
	int n,m;
	fscanf(fin,"%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		fscanf(fin,"%d",&arr[i]);
	}
	vector<int> v;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool flag=0;
			for(int k:v){
				if(k==arr[j]){
					flag=1;
					break;
				}
			}
			if(flag){
				while(1){
					if(v[v.size()-1]==arr[j]){
						break;
					}
					v.pop_back();
				}
			}else{
				v.push_back(arr[j]);
			}
		}
		for(int j:v){
			ans[j]++;
		}
		v.clear();
	}
	for(int i=1;i<=m;i++){
		fprintf(fout,"%d ",ans[i]);
	}
	return 0;
}

