#include<stdio.h> 
#include<string.h>
int main(){
	FILE *filePointer;
	char buffer[100];
	int lineNumber = 0;
	
	filePointer = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt3.txt","r");
	printf("Noi dung cua file:\n");
	while(fgets(buffer, sizeof(buffer),filePointer)!=0){
		lineNumber++;
		printf("%s",buffer);
	}
	fclose(filePointer);
	printf("So dong trong file: %d\n",lineNumber);
	return 0;
}
