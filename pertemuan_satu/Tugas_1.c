#include <stdio.h>  // untuk printf, scanf, fgets

int main(){
    system("cls");  // membersihkan layar 

    char nim[20];                 // menyimpan NIM
    char nama[40];                // menyimpan nama
    int umur;                     // menyimpan umur
    char departemen[30],jabatan[30]; // menyimpan departemen dan jabatan
    float gaji;                   // menyimpan gaji

    printf("Masukkan Nama: "); 
    fgets(nama,sizeof(nama),stdin);  // input nama

    printf("masukkan nim: ");
    fgets(nim,sizeof(nim),stdin);    // input NIM

    printf("masukkan departemen anda: ");
    fgets(departemen,sizeof(departemen),stdin);  // input departemen

    printf("masukkan jabatan anda: ");
    fgets(jabatan,sizeof(jabatan),stdin);  // input jabatan

    printf("masukkan umur anda: ");
    scanf("%d", &umur);   // input umur (int)

    printf("masukkan gaji anda: ");
    scanf("%f", &gaji);   // input gaji (float)

    printf("===== DATA PEGAWAI =====\n");  // judul tampilan data
    printf("Nama        : %s", nama);       // menampilkan nama
    printf("NIM         : %s", nim);        // menampilkan NIM
    printf("Departemen  : %s", departemen); // menampilkan departemen
    printf("Jabatan     : %s", jabatan);    // menampilkan jabatan
    printf("Umur        : %d\n", umur);     // menampilkan umur
    printf("Gaji        : %.2f\n", gaji);   // menampilkan gaji 2 desimal

    return 0;  // program selesai
}