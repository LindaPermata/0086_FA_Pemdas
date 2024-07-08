#include <iostream>
using namespace std;

/**
 * @mainpage sistem penilaian 
 * 
 * @section intro_sec Pendahuluan ini dibuat untuk mengidentifikasi status kelulusan dari dua mata kuliah
 * 
 * @section 
 * 
 * @file uas.cpp
 * @author your name (linda)
 * @brief 
 * @version 0.1
 * @date 2024-06-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */


class MataKuliah
{
 // isi dengan access modifier yang dibutuhkan
 private :
 float presensi;
 float activity;
 float exercise;
 float tugasakhir;
 // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
MataKuliah()
{
 presensi = 0.0;
 activity = 0.0;
 exercise = 0.0;
 tugasakhir = 0.0;

 // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
}
virtual void namaMataKuliah() { return; }
// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
void setPresensi(float nilai)
{
 this->presensi = nilai;
}
float getPresensi()
{
 return presensi;
}

void setActivity(float nilai )
{
this-> activity = nilai;
}
float getActivity()
{
    return activity;
}

void setExercise(float nilai) 
{
this-> exercise = nilai;
}
float getExercise()
{
    return exercise;
}

void setTugasAkhir(float nilai)
{
    this-> tugasakhir = nilai;
}
float getTugasAkhir()
{
    return tugasakhir;
}

// tambahkan setter dan getter lain yang dibutuhkan dibawah ini

public:
/// \brief setter untuk nama
/// \param n Nama Matakuliah
void setNama(const string &n) { nama = n; }

/// \brief Getter untuk nama
/// \return Nama Karyawan 
string getNama() const { return nama; }

/// \brief Setter untuk presensi
/// \param p Presensi
void setPresensi(float p) { presensi = p; }

/// \brief getter untuk presensi
/// \brief return presensi mahasiswa
void getPresensi() const {} return presensi; }

};

class Pemrograman : public MataKuliah
{
    void inputData() {
        string namaMatkul;
        int nilai;
        float presensi;
        float activity;
        float exercise;
        float tugasakhir;

        cout << "Masukkan nama mata kuliah: ";
        cin >> namaMatkul;
        setNama(namaMatkul);

        cout << "Nilainya adalah: ";
        cin >> nilai;
        setNilai (nilai);

    }
 // isi disini untuk mengisi kelas pemrograman
};
class Jaringan : public MataKuliah
{
    string namaMatkul;
    int nilai;
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

    cout << "Masukkan nama mata kuliah: ";
    cin >> namaMatku;
    setNama (nama);

 // isi disini untuk mengisi kelas jaringan
};
int main()
{
 char pilih;
 do {
    cout << "MataKuliah yang dipilih:" << endl;
    cout << "1. Pemrograman" << endl;
    cout << "2. jaringan" << endl;
    cout << " Pilih mata kuliah (1/2, 'n' unuk keluar): " << endl;
    cin >> pilih;
 }

 MataKuliah *mataKuliah;
 Pemrograman pemrograman;
 Jaringan jaringan;
 // isi disini untuk menentukan mata kuliah yang dipilih

 return 0;
}