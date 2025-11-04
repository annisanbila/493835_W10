# Student Grades Management Program (C++)

## Deskripsi Program
Program ini digunakan untuk mengelola data nilai mahasiswa dengan membaca **nama depan**, **nama belakang**, dan **nilai ujian** dari file input.  
Program kemudian akan:
- Menentukan **grade huruf (A–F)** berdasarkan nilai ujian.
- Menampilkan daftar mahasiswa dengan nilai dan grade masing-masing.
- Mencari **nilai tertinggi** serta **menampilkan nama mahasiswa yang memperoleh nilai tersebut**.  
Hasil akhir akan disimpan ke dalam file **`results.txt`**.

---

## Struktur Data
```cpp
struct studentType {
    string studentFName;  // Nama depan mahasiswa
    string studentLName;  // Nama belakang mahasiswa
    int testScore;        // Nilai ujian
    char grade;           // Grade huruf (A, B, C, D, F)
};

