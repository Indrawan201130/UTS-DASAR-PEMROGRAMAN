#include <iostream>
using namespace std;

int main()
{
    int A[10];
    int nilai;
    cout << "Nama : Indrawan Surya R" << endl;
    cout << "NIM : A2.190008" << endl;
    cout << "Nilai pada: " << endl << endl;
    for (int C=0; C<10; C++){
        cout << "Indeks [" << C << "] = ";
        cin >> A[C];
    }
    cout << endl;

    cout << "Nilai yang dicari adalah: ";
    cin >> nilai;
    for (int D = 0; D<10; D++)
    {
        if (A[D] == nilai)
        {
            cout << "Nilai terdapat pada indeks ke " << D << endl;
            break;
        }

    }
    cout << "\n";
    return 0;
}
