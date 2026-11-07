#include<bits/stdc++.h>
using namespace std;
char s1[3],s2[3];
int main(){
	FILE *fin,*fout;
	fin=fopen("travel.in","r");
	fout=fopen("travel.out","w");
	int a,b;
	fscanf(fin,"%d %s %d %s",&a,&s1,&b,&s2);
	if(a!=b){
		fprintf(fout,"0000");
	}else{
		fprintf(fout,"1");
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			fprintf(fout,"1");
			if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
				fprintf(fout,"1");
				if(s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='A'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'||s1[2]=='C'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='C'){
					fprintf(fout,"1");
				}else{
					fprintf(fout,"0");
				}
			}else{
				fprintf(fout,"00");
			}
		}else{
			fprintf(fout,"000");
		}
	}
	return 0;
}

