#include<stdio.h>
#include<string.h>
int main(){
	FILE *filePointer;
	char buffer[100];
	int n;
	
	printf("Nhap vao so dong:");
	scanf("%d",&n);
	fflush(stdin);
	
	printf("Nhap vao noi dung cua tung dong:\n");
	filePointer = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt3.txt","w+");
	
	for(int i=0;i<n;i++){
		printf("Dong %d:",i+1);
		scanf("%s",buffer);
		fprintf(filePointer,"%s\n",buffer);
	}
	fclose(filePointer);
	return 0;
}
