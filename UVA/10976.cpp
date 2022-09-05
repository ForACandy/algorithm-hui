#include<cstdio>
using namespace std;
int num[300][2];
int main() {
  int k;
  while(scanf("%d",&k)==1){
  	int cut=0;
    for(int y=k+1;y<=2*k;++y){
    	if(k*y%(y-k))continue;
    	num[cut][1]=y;
    	num[cut++][0]=k*y/(y-k);
	}
    printf("%d\n",cut);
   	for(int i=0;i<cut;++i)printf("1/%d = 1/%d + 1/%d\n",k,num[i][0],num[i][1]);
  }
  return 0;
}
