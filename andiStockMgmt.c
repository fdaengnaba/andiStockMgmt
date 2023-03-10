/*
 * Program untuk mengelola stock barang
 *
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char name[100];
    int qtt;
    struct node *prev;
    struct node *next;
} Node;

/*Tambah barang: menu ini digunakan untuk menambahkan barang baru ke dalam stok barang. */
/* Hapus barang: menu ini digunakan untuk menghapus barang yang sudah tidak diperlukan dari stok barang. */
/* Tampilkan stok barang: menu ini digunakan untuk menampilkan daftar barang yang ada di dalam stok barang beserta jumlah stoknya. */
/* Cari barang: menu ini digunakan untuk mencari sebuah barang di dalam stok barang berdasarkan nama barang. */
/* Update stok barang: menu ini digunakan untuk mengupdate stok barang jika terjadi penjualan atau pembelian barang.*/


int main() {
    Node *head = NULL;
    int menu;
    char name[100];
    int qtt;
}