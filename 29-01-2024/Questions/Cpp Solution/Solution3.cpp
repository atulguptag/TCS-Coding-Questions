#include<stdio.h>
#include<string.h>

int main(){
	char teams_list[12][20],str[20];
	int count=0,i,j;
	scanf("%s\n",str);
	while(strcmp(str,"q")!=0&&strcmp(str,"Q")!=0){
		if(count==12){
			printf("Maximum limit of Teams is 12");
			return 0;
		}
		strcpy(teams_list[count],str);
		count+=1;
		scanf("%s\n",str);
	}
	if(count>=3){
		printf("TOTAL MATCHES:%d\n",(count)*(count-1)/2);
		for(i=0;i<count-1;i++){
			for(j=i+1;j<count;j++){
				printf("%s-VS-%s\n",teams_list[i],teams_list[j]);
			}
		}
	}
	else{
		printf("Minimum 3 Teams are required");
	}
}