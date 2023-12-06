#include <stdio.h>
#include <stdlib.h>


struct Book {
    int maSach;
    char tenSach[50];
    char tacGia[50];
    float giaTien;
    char theLoai[50];
};


void nhapThongTin(struct Book* books, int n) {
    printf("Nhap thong tin sach:\n");
    for (int i = 0; i < n; i++) {
        printf("Sach thu %d:\n", i + 1);
        printf("Ma sach: ");
        scanf("%d", &books[i].maSach);
        fflush(stdin);

        printf("Ten sach: ");
        fgets(books[i].tenSach, sizeof(books[i].tenSach), stdin);

        printf("Tac gia: ");
        fgets(books[i].tacGia, sizeof(books[i].tacGia), stdin);

        printf("Gia tien: ");
        scanf("%f", &books[i].giaTien);
        fflush(stdin);

        printf("The loai: ");
        fgets(books[i].theLoai, sizeof(books[i].theLoai), stdin);
    }
}


void luuThongTin(struct Book* books, int n) {
    FILE* file = fopen("C:\\Users\\thegioididong.com\\Desktop\\books.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Ma sach: %d\n", books[i].maSach);
        fprintf(file, "Ten sach: %s", books[i].tenSach);
        fprintf(file, "Tac gia: %s", books[i].tacGia);
        fprintf(file, "Gia tien: %.2f\n", books[i].giaTien);
        fprintf(file, "The loai: %s", books[i].theLoai);
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Da luu thong tin sach vao file books.txt.\n");
}

void hienThiThongTin() {
    FILE* file = fopen("C:\\Users\\thegioididong.com\\Desktop\\books.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
}

int main() {
    struct Book books[100];
    int choice, n;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Luu thong tin sach vao file\n");
        printf("3. Hien thi thong tin sach tu file\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong sach: ");
                scanf("%d", &n);
                nhapThongTin(books, n);
                break;
            case 2:
                luuThongTin(books, n);
                break;
            case 3:
                hienThiThongTin();
                break;
            case 4:
              	exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
