#include<stdio.h>
int main(){
	int n,count;
	scanf("%d",&n);
	int a[n-1];
	for(int i=0;i<n-1;i++){
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n-1;i++){
		count=0;
		for(int j=0;j<n-1;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count%2!=0){
			printf("%d",a[i]);
			break;
		}
	}
}
