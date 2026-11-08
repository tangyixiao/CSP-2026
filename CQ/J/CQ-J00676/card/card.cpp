#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
long long  n,m;
cin>>n>>m;
	vector<long long> s1(n);
	for(int i=0;i<n;i++){
		scanf("%d",&s1[i]);
	}
	vector<int> bjj(600000);
	  for(int i=0;i<m;i++){
	  	vector<int> bj(600000);
	  	string s2;
	  	for(int j=n-i;j<n;j++){
	  		if(bj[s1[j]]==0){//如果当前牌堆不存在 
	  			bj[s1[j]]++;//标为存在 
	  			s2.push_back(s1[j]+'0');//放进字串 
			  }else{
			  	for(int l=j;l<s2.size()+1;l++){
				  //切掉当前位置以后的 
				  s2[l]='=';
			}
			  	s2.push_back(s1[j+1]+'0');
				  
		  }
	}
		  /////////////////////////////////////////
		  for(int k=0;k<s2.size();k++){
		  	if(s2[k]!='=')
		  	bjj[s2[k]-'0']++;
		  
	  }
}

	  for(int i=0;i<600001;i++){
	  	if(bjj[i]!=0){
	  		cout<<bjj[i]<<" ";
		  }
	  }
	return 0;
}
