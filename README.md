# Student Grade Management Program

Program ini ditulis dalam bahasa **C++** untuk mengelola data nilai siswa.  
Pengguna diminta memasukkan nama depan, nama belakang, dan nilai ujian dari beberapa siswa.  
Program akan menghitung grade (A–F), menampilkan seluruh data siswa, dan menampilkan siapa yang mendapat nilai tertinggi.

---

## Cara Kerja Program

1. Pengguna memasukkan data siswa sebanyak jumlah yang ditentukan.  
2. Program menentukan grade berdasarkan nilai ujian:  
   - A → ≥ 90  
   - B → 80–89  
   - C → 70–79  
   - D → 60–69  
   - F → < 60  
3. Program mencari nilai tertinggi di antara semua siswa.  
4. Program menampilkan daftar seluruh siswa beserta nama, nilai, dan grade.  
5. Program menampilkan nama siswa yang memperoleh nilai tertinggi.

---

## Penjelasan Fungsi

- **`readData()`**  
  Membaca input dari pengguna berupa nama depan, nama belakang, dan nilai ujian untuk setiap siswa, lalu menyimpannya ke dalam array struktur `studentType`.

- **`assignGrade()`**  
  Menentukan nilai huruf (A, B, C, D, atau F) untuk setiap siswa berdasarkan skor ujian yang dimasukkan. Misalnya, nilai ≥ 90 akan mendapat grade A.

- **`findHighestScore()`**  
  Mencari dan mengembalikan nilai ujian tertinggi dari seluruh data siswa dalam array.

- **`printHighestStudents()`**  
  Menampilkan nama-nama siswa yang memiliki nilai tertinggi, berdasarkan hasil dari fungsi `findHighestScore()`.

- **`printAllStudents()`**  
  Menampilkan semua data siswa dalam format tabel yang berisi nama belakang, nama depan, nilai, dan grade masing-masing.

- **`main()`**  
  Merupakan fungsi utama yang mengatur jalannya program.  
  Fungsi ini memanggil semua fungsi di atas secara berurutan:  
  membaca data, menghitung grade, mencari nilai tertinggi, dan menampilkan hasilnya.








