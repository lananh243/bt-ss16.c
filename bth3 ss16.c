#include<stdio.h>
#include<string.h>
int main(){
	FILE *taptin = NULL;
	const int soKyTuToiDa = 1000;
	char chuoi[1000] = "";
	taptin = fopen("C:\\Users\\thegioididong.com\\Desktop\\text.txt","r");
	if(taptin != NULL){
		fgets(chuoi , soKyTuToiDa ,taptin);
		printf("%s",chuoi);
		fclose(taptin);
	}
	return 0;
}
