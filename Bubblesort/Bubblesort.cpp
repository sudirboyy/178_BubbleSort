#include <iostream>
using namespace std;


int a[20];          //Deklarasi array a dengan ukuran 20
int n;              //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {          // Procedure untuk input
    while (true) {      // Looping 
        cout << "Masukkan banyaknya elemen pada array : ";  // Output ke layar
        cin >> n;       // input dari pengguna
        if (n <= 20)    // jika n kurang dari atau sama dengan 20
            break;      // keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    // output ke layar
        }
    }
    cout << endl;                                   // output baris kosong
    cout << "=====================" << endl;        // output ke layar
    cout << "Masukkan Elemen Array" << endl;        // output ke layar
    cout << "=====================" << endl;        // output ke layar

    for (int i = 0; i < n; i++) {                   // looping dengan i dimulai dari 0 hingga n-1
        cout << " Data ke - " << (i + 1) << ": ";   // output ke layar
        cin >> a[i];                                // input dari pengguna
    }
}

void display() {            // Procedure untuk menampilkan hasil
    cout << endl;                                           // output baris kosong
    cout << "==================================" << endl;   // output ke layar
    cout << "Element Array yang telah tersusun" << endl;    // output ke layar
    cout << "==================================" << endl;   // output ke layar
    for (int j = 0; j < n; j++) {                           // looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                               // output ke layar
    }
    cout << endl;                                           // output baris kosong
}

void bubbleSortArray() {        // Procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {           // looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - i; j++) {   // looping dengan j dimulai dari 0 hingga n-i-1
            if (a[j] > a[j + 1]) {          // jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];            // simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + 1];            // assign nlai a[j+1] ke a[j]
                a[j + 1] = temp;            // assign nilai temp ke a[j+1]
            }
        }
    }
}

int main() {
    input();    // memanggil read ()
    bubbleSortArray();  //memanggil bubbleSortArray
    display();      //memanggil display
    return 0;
}