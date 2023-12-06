#include <stdio.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char buffer[100];

    printf("Nhap vao mot chuoi ki tu bat ki: ");
    fgets(buffer, sizeof(buffer), stdin);

    filePointer = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt1.txt", "w+");
    

  	fwrite(buffer, sizeof(char), strlen(buffer), filePointer);

    
    fclose(filePointer);

    return 0;
}
