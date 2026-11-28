# TUBES-Struktur-Data

# Criminal Case: Investigation System

Program ini merupakan tugas besar mata kuliah Struktur Data yang dibuat menggunakan bahasa C++. Program ini mengadaptasi beberapa mekanisme dari permainan Criminal Case ke dalam bentuk simulasi berbasis console.

Dalam program ini, pemain berperan sebagai penyelidik yang bertugas mengumpulkan barang bukti, memeriksa tersangka, dan mencari hubungan antara berbagai petunjuk untuk menyelesaikan sebuah kasus.

## Tentang Program

Kasus yang digunakan dalam simulasi ini berjudul **The Murder at Blackwood Mansion**. Pemain dapat melakukan investigasi di beberapa lokasi, mengumpulkan barang bukti, mengelola Evidence Inventory, melihat daftar tersangka, serta menghubungkan berbagai objek melalui Investigation Board.

Evidence Inventory tidak hanya digunakan untuk menyimpan barang bukti, tetapi juga menyediakan fitur untuk melihat detail, melakukan pemeriksaan, dan mengetahui status setiap barang bukti.

## Struktur Data yang Digunakan

- **Singly Linked List (SLL):** Digunakan untuk menyimpan dan mengelola barang bukti yang berhasil dikumpulkan, termasuk informasi detail, hasil pemeriksaan, dan statusnya.
- **Graph:** Digunakan untuk menggambarkan hubungan antara barang bukti, tersangka, dan lokasi investigasi melalui Investigation Board dengan representasi adjacency list.

## Fitur

- Mengunjungi lokasi penyelidikan.
- Mengumpulkan barang bukti.
- Melihat dan mencari barang bukti.
- Melihat detail informasi barang bukti.
- Melakukan pemeriksaan terhadap barang bukti (Evidence Examination).
- Melihat status pemeriksaan dan status koneksi barang bukti.
- Melihat daftar tersangka.
- Menghubungkan objek melalui Investigation Board.
- Melihat perkembangan kasus.
- Menentukan kesimpulan akhir kasus.

## Cara Menjalankan Program

Pastikan compiler C++ sudah terpasang.

1. Buka folder proyek melalui Visual Studio Code.
2. Buka terminal pada folder proyek.
3. Jalankan perintah berikut:

```bash
g++ main.cpp TUBES.cpp -o CriminalCase
```

4. Jalankan program:

Windows:

```bash
CriminalCase.exe
```

Linux:

```bash
./CriminalCase
```

## Struktur File

```text
CriminalCase/
├── main.cpp
├── TUBES.h
├── TUBES.cpp
└── README.md
```

## Teknologi

- Bahasa pemrograman: C++
- IDE: Visual Studio Code
- Compiler: g++

## Pengembang

Dibuat oleh kelompok [Nama Kelompok] untuk memenuhi tugas besar mata kuliah Struktur Data.

Anggota kelompok:

- Marco Syahin Maulana Mafau (103052500097)
- Daffa Wishnuhimaru Majid (103052530010)
- Faqih Ahmad Nabiyl Rifai (103052500034)
