#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struktur data siswa
struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// a. Fungsi untuk membaca data siswa
void readData(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Masukkan nama depan siswa ke-" << i + 1 << ": ";
        cin >> students[i].studentFName;
        cout << "Masukkan nama belakang siswa ke-" << i + 1 << ": ";
        cin >> students[i].studentLName;
        cout << "Masukkan nilai tes (0–100): ";
        cin >> students[i].testScore;
        cout << endl;
    }
}

// b. Fungsi untuk memberi grade berdasarkan nilai
void assignGrade(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore >= 90)
            students[i].grade = 'A';
        else if (students[i].testScore >= 80)
            students[i].grade = 'B';
        else if (students[i].testScore >= 70)
            students[i].grade = 'C';
        else if (students[i].testScore >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

// c. Fungsi untuk mencari nilai ujian tertinggi
int findHighestScore(studentType students[], int size) {
    int highest = students[0].testScore;
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }
    return highest;
}

// d. Fungsi untuk menampilkan nama siswa dengan nilai ujian tertinggi
void printHighestStudents(studentType students[], int size, int highestScore) {
    cout << "\nNilai tertinggi: " << highestScore << endl;
    cout << "Siswa dengan nilai tertinggi:" << endl;
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highestScore) {
            cout << students[i].studentLName << ", " 
                 << students[i].studentFName << endl;
        }
    }
}

// Fungsi untuk menampilkan seluruh data siswa
void printAllStudents(studentType students[], int size) {
    cout << left << setw(15) << "Nama Belakang" 
         << setw(15) << "Nama Depan"
         << setw(10) << "Nilai"
         << setw(6) << "Grade" << endl;

    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << left << setw(15) << students[i].studentLName
             << setw(15) << students[i].studentFName
             << setw(10) << students[i].testScore
             << setw(6) << students[i].grade << endl;
    }
}

// Fungsi utama 
int main() {
    const int SIZE = 20;  
    studentType students[SIZE];

    readData(students, SIZE);
    assignGrade(students, SIZE);
    int highest = findHighestScore(students, SIZE);

    cout << "\nDaftar nilai Siswa:\n";
    printAllStudents(students, SIZE);
    printHighestStudents(students, SIZE, highest);

    return 0;
}