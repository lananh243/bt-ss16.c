#include<stdio.h> 
#include<string.h>
//C:\\Users\\thegioididong.com\\Desktop\\bt1.txt
int main(){
	FILE *filePointer;
	char buffer[100];
	filePointer = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt1.txt","r");
	for(int i=0;i< strlen(buffer);i++){
		fread(buffer,sizeof (char), sizeof(buffer),filePointer);
	}
	printf("Du lieu tu tep tin :%s",buffer);
	fclose(filePointer);
	return 0;
}
