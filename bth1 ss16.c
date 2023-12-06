#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	int tuoi = 0;
	taptin = fopen("C:\\Users\\thegioididong.com\\Desktop\\text.txt","w");
	if(taptin != NULL){
		printf("Ban bao nhieu tuoi ?");
		scanf("%d",&tuoi);
		
		fprintf(taptin,"Nguoi dang su dung chiec may tinh nay %d tuoi",tuoi);
		fclose(taptin);
	}
	return 0;
	
}
