#include <stdio.h>

#define MAX_STUDENTS 100

struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[20];
    char email[50];
};

int main() {
    int n; 
    struct SinhVien dsSinhVien[MAX_STUDENTS];

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ho va ten: ");
        fflush(stdin);
        fgets(dsSinhVien[i].hoTen, sizeof(dsSinhVien[i].hoTen), stdin);

        printf("Tuoi: ");
        scanf("%d", &dsSinhVien[i].tuoi);

        printf("So dien thoai: ");
        fflush(stdin);
        fgets(dsSinhVien[i].soDienThoai, sizeof(dsSinhVien[i].soDienThoai), stdin);

        printf("Email: ");
        fflush(stdin);
        fgets(dsSinhVien[i].email, sizeof(dsSinhVien[i].email), stdin);
    }


    FILE *file = fopen("C:\\Users\\thegioididong.com\\Desktop\\student.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.");
        return 1;
    }

  
    for (int i = 0; i < n; i++) {
        fprintf(file, "Ho va ten: %s", dsSinhVien[i].hoTen);
        fprintf(file, "Tuoi: %d\n", dsSinhVien[i].tuoi);
        fprintf(file, "So dien thoai: %s", dsSinhVien[i].soDienThoai);
        fprintf(file, "Email: %s", dsSinhVien[i].email);
        fprintf(file, "\n");
    }

    fclose(file);

    printf("Da luu thong tin sinh vien vao file students.txt.\n");

    return 0;
}
