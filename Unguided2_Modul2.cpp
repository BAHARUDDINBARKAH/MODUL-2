#include <iostream>
using namespace std;

int main() {
    int x_Baharuddin, y_Barkah, z_Pratama;

    cout << "Masukkan jumlah atau ukuran array dalam dimensi x: ";
    cin >> x_Baharuddin;
    cout << "Masukkan  jumlah atau ukuran array dalam dimensi y: ";
    cin >> y_Barkah;
    cout << "Masukkan  jumlah atau ukuran array dalam dimensi z: ";
    cin >> z_Pratama;

    int arr[x_Baharuddin][y_Barkah][z_Pratama];

    for (int x = 0; x < x_Baharuddin; x++) {
        for (int y = 0; y < y_Barkah; y++) {
            for (int z = 0; z < z_Pratama; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    cout << "Data Array:\n";
    for (int x = 0; x < x_Baharuddin; x++) {
        for (int y = 0; y < y_Barkah; y++) {
            for (int z = 0; z < z_Pratama; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << "Tampilan array:\n";
    for (int x = 0; x < x_Baharuddin; x++) {
        for (int y = 0; y < y_Barkah; y++) {
            for (int z = 0; z < z_Pratama; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}