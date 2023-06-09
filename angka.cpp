#include <iostream>
using namespace std;
int binarySearch(int angka[], int n, int target) {
    int kecil = 0;
    int besar = n - 1;

    while (kecil <= besar) {
        int mid = kecil + (besar - kecil) / 2;

        if (angka[mid] == target)
            return mid;
        
        if (angka[mid] < target)
            kecil = mid + 1;
        else
            besar = mid - 1;
    }

    return -1;
}
int main() {
    int angka[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91,95,99};
    int n = sizeof(angka) / sizeof(angka[0]);

    int target = 72;
    int index = binarySearch(angka, n, target);

    if (index != -1)
        cout << "Elemen ditemukan pada indeks " << index << endl;
    else
        cout << "Elemen tidak ditemukan dalam array." << endl;

    return 0;
}
