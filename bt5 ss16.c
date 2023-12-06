#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

   
    file1 = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt1.txt", "r");
    file2 = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt3.txt", "r");
    file3 = fopen("C:\\Users\\thegioididong.com\\Desktop\\bt5.txt", "w");


    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Khong the mo file.");
        return 1;
    }


    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }


    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }


    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Da sao chep noi dung tu file1 và file2 sang file3.\n");
    return 0;
}
