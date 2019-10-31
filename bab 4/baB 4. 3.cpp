#include <iostream>
using namespace std;
int main()
{
    cout<<"===================================================================\n";
    cout<<" Nama   : Indrawan Surya R                                         \n";
    cout<<" NIM    : A2.1900084                                               \n";
    cout<<" Jurusan: TI                                                       \n";
    cout<<" Blog   : www.STMIKSumedang.com                                    \n";
    cout<<"===================================================================\n";
    cout<<"          LATTIHAN INPUT OUTPUT                                     \n";
    cout<<"*******************************************************************\n";
    char tampilkan[1];
    char Nama[50], Alamat[50], tl[50], jk[50], no[50], pekerjaan[50], email[50], website[50];
    cout<<"==================================================================\n";
    cout<<"         DAFTAR RIWAYAT HIDUP                                     \n";
    cout<<"==================================================================\n";
    cout<<"Nama : ";
    cin.getline(Nama, 50);
    cout<<"Alamat : ";
    cin.getline(Alamat,50);
    cout<<"Tanggal Lahir : ";
    cin.getline(tl,50);
    cout<<"Jenis Kelamin : ";
    cin.getline(jk,50);
    cout<<"No Telp/HP : ";
    cin.getline(no,50);
    cout<<"Pekerjaan : ";
    cin.getline(pekerjaan,50);
    cout<<"Email : ";
    cin.getline(email,50);
    cout<<"Website : ";
    cin.getline(website,50);
    cout<<" Jurusan : TI STMIK SUMEDANG";
    cin.getline(tampilkan,1);
    return 0;
}
