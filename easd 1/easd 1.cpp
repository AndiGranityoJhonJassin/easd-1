
// jawaban

// 1. Algoritma sangat penting dalam menyelesaikan masalah karena dapat membantu kita memecahkan masalah dengan cara yang terstruktur dan efisien.
// 2.     a.linked list
//        b.array
// 3.     a.struktur sata
//        b.bahasa program
//        c.ukuran input
// 4. jenis algoritma insertionsort, algoritma ini sangat mudah untuk data kecil, pengurutan dilakukan dengan membandingkan setiap elemen satu per satu dan memasukannya ke posisi yang benar secara berurutan
//    algoritma ini sangat cepat untuk data kecil, pengurutan dilakukan dengan membandingkan setiap elemen satu per satu dan memasukannya ke posisi yang benar secara berurutan
// 5.     a.yang termasuk kedalam quadratic adalah bubblesort,insertion,selection sort
//        b.yang termasuk loginer adalah quick sort
// 6.
#include <iostream>
using namespace std;


void merge(string nama, int arr[20], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0; // Initial index of first sub-array
    j = 0; // Initial index of second sub-array
    k = l; // Initial index of merged sub-array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergeSort(string nama, int arr[20], int l, int r)
{
    if (l >= r) {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(nama, arr, l, m);
    mergeSort(nama, arr, m + 1, r);
    merge(nama, arr, l, m, r);
}

// Main function
int main()
{
    // Input data
    int n = 78 + 20 - 2 * 15 + 10 + 20; // Jumlah data maksimum
    int arr[20];
    cout << "Masukkan " << n << " bilangan integer:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array using merge sort
    string nama = "NA"; // Ganti dengan nama panggilan Anda
    mergeSort(nama, arr, 0, n - 1);

    // Print the sorted array
    cout << "Array setelah diurutkan:" << endl;
    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;


#include <iostream>
    using namespace std;

    const int MAX = 45;
    const string NICKNAME = "ChatGPT";
    const string INITIALS = "CG";

    void merge(int arr[], int low, int mid, int high) {
        int i = low, j = mid + 1, k = low;
        int B[MAX];

        do {
            if (arr[i] < arr[j]) {
                B[k] = arr[i];
                i++;
            }
            else {
                B[k] = arr[j];
                j++;
            }
            k++;
        } while (i <= mid && j <= high);

        while (i <= mid) {
            B[k] = arr[i];
            i++;
            k++;
        }

        while (j <= high) {
            B[k] = arr[j];
            j++;
            k++;
        }

        for (int x = low; x <= high; x++) {
            arr[x] = B[x];
        }
    }

    void mergeSort(int arr[], int low, int high) {
        if (low >= high) {
            return;
        }

        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }

    int main() {
        int arr[MAX];
        int n = 0;

        do {
            cout << "Masukkan jumlah bilangan bulat (maksimum 45): ";
            cin >> n;
        } while (n < 1 || n > MAX);

        cout << "Masukkan " << n << " bilangan bulat:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        mergeSort(arr, 0, n - 1);

        cout << "Hasil pengurutan:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
    }
}