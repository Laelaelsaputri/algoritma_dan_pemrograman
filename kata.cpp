#include<iostream>
#include <algorithm>
using namespace std;
int binarySearch(string kata[], int kecil, int besar, string target) {
    while (kecil <= besar) {
        int mid = kecil + (besar - kecil) / 2;

        if (kata[mid] == target)
            return mid;
        
        if (kata[mid] < target)
            kecil = mid + 1;
        else
            besar = mid - 1;
    }

    return -1;
}
int main() {
    string kata[] = {"sekolah", "tinggi", "manajemen", "informatika", "dan","komputer","lombok"};
    int n = sizeof(kata) / sizeof(kata[0]);
	sort(kata, kata + n);
    string target = "dan";
    int index = binarySearch(kata, 0, n - 1, target);
    if (index != -1)
        cout << "Elemen ditemukan pada indeks " << index << endl;
    else
        cout << "Elemen tidak ditemukan dalam array." << endl;

    return 0;
}
