#include<stdio.h>

//取n中的数字的函数
int digit_sum(int n){
	//初始化sum
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
		//TODO
	}
	return sum;
}

int main(){
	printf("输入婴儿个数n，和智商衡量标准k，用空格隔开\n");
	int n,k;
	scanf("%d %d",&n,&k);
	
	int smartbaby=0;
	for(int i=1;i<=n;i++){
		//TODO
		int smart=i-digit_sum(i);
		
		if(smart>=k){
			smartbaby++;
		}
	}
	
	printf("%d",smartbaby);
	return 0;
}
 

