#include<stdio.h>
int main(){
	int t,m[300033],n,k,s,q,j;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		s=0,q=1,k=0,j=1;
		for(int p=0;p<n;p++){
			scanf("%d",&m[p]);
			if(k<m[p]) {k=m[p];s=p;}
			if(p>=1) {if(m[p]==m[p-1]){q++;if(j)s++;} 
			if(m[p]!=m[p-1])j=0;}
			}
		if(q==n) printf("-1\n");
		else printf("%d\n",s+1);
	}
	return 0;
	}
 		 					  	 	 						  	 				 	