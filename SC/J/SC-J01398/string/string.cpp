#include<bits/stdc++.h>//？后面的代码咋影响到前面的输出？ 
using namespace std;//栈或反转  xxx

int s[200010];//sum
struct Str{
	int a;//times
	char c;//letter down
}A[200010];

int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;//s[n]=>length
	cin>>n;
	for(int i=1;i<=n;++i){//1
		cin>>A[i].a>>A[i].c;
		s[i]=s[i-1]+A[i].a;//前缀和 
	}
//	cout<<s[n];
	int m;//middle
	bool b=0;
	if(s[n]%2==0){//pl.
	//cout<<"#";
		m=s[n]/2;
	}
	else{//sin
		//cout<<"$";
		m=(s[n]+1)/2;
		b=1;
	}
	for(int i=1;i<=n;++i){//找区间 
//	cout<<s[i-1]<<"<"<<m<<"<"<<s[i]<<" ";
		if(m>=s[i-1]&&m<=s[i]){//i 处下标 
			if(b) --A[i].a;
			if(m=s[i]) m=i;//mL
			else if(m=s[i-1]) m=i-1;//mR
			else{
				int t=A[i].a-m;//割走的
				A[i].a=m-A[i-1].a;//剩的
				A[n+1].a=t; A[n+1].c=A[i].c;//移到后面 
				m=i;//记忆 
			}
			break;
		}
	}
	//都是偶了 
	//cout<<m<<'\n';
	for(int i=m+1 /*右边开头*/ ,j=s[n] /*右边最后*/ ;i!=j;++i,--j /*向内收紧*/ ){
		swap(A[i],A[j]);
		cout<<i<<"="<<j<<" ";
	}//翻转 
	
	int ans=0;
	for(int i=0 /*left*/ ,j=m+1 /*right*/ ;i<=m&&j<=s[n]+1;){//compare 
		cout<<"!";
		if(A[i].c!=A[j].c){
			ans+=min(A[i].a,A[j].a);
			if(A[i].a>A[j].a){//i continue
				A[i].a-=A[j].a;
				++j;
			}
			else if(A[i].a<A[j].a){//j continue
				A[j].a-=A[i].a;
				++i;
			}
			else{//= next
				++i; ++j;
			}
		}
	 	else{
			if(A[i].a>A[j].a){//i continue
				A[i].a-=A[j].a;
				++j;
			}
			else if(A[i].a<A[j].a){//j continue
				A[j].a-=A[i].a;
				++i;
			}
			else{//= next
				++i; ++j;
			}
		}
	}
	cout<<ans;
	return 0;
} 
/*
#include<bits/stdc++.h>
using namespace std;//栈或反转  xxx

int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0); 
	
	int n,a;//s[n]=>length
	char c;
	cin>>n;
	string s,s1;
	for(int i=0;i<n;++i){
		//cout<<i;
		cin>>a>>c;
		cout<<i; 
		for(int j=0;j<a;++j){
			s+=c;
			cout<<"!";
		}
	}
	cout<<s;
	s1=s; 
	int l=s.size();
	for(int i=0,j=l-1;i!=j;++i,++j){
		swap(s[i],s[j]);
	}
	
	int ans=0;
	for(int i=0;i<l;i++){
		if(s[i]!=s1[i]) ++ans;
	}
	
	cout<<ans;
	*///return 0;
//} 