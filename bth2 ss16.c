#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	int kyTuHienTai = 0;
	taptin = fopen("C:\\Users\\thegioididong.com\\Desktop\\text.txt","r");
	if(taptin != NULL){
		do{
			kyTuHienTai = fgetc(taptin);
			printf("%c",kyTuHienTai);
		}while(kyTuHienTai != EOF);
		fclose(taptin);
	}
	return 0;
}
