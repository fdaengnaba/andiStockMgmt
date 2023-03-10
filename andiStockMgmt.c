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

typedef struct list {
    Node* head;
} DoubleLinkedList;

/*Tambah barang: menu ini digunakan untuk menambahkan barang baru ke dalam stok barang. */
void addNode(DoubleLinkedList *linkedList, char name[100], int qtt){
    Node *newNode = ( Node *) malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->qtt = qtt;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (linkedList->head == NULL){
        linkedList->head = newNode;
    } else {
        newNode->next = linkedList->head;
        linkedList->head->prev=newNode;
        linkedList->head = newNode;
    }
        
}

/* Hapus barang: menu ini digunakan untuk menghapus barang yang sudah tidak diperlukan dari stok barang. */
/* Tampilkan stok barang: menu ini digunakan untuk menampilkan daftar barang yang ada di dalam stok barang beserta jumlah stoknya. */
void displayList(DoubleLinkedList *linkedList){
    Node *curr = linkedList->head;
    if (curr == NULL) printf("%s\n", "Tidak ada data stock barang");
    else{
        while (curr != NULL){
            printf("Nama Barang : %s\n", curr->name);
            printf("Quantity : %d\n", curr->qtt);
            curr = curr->next;
        }
    }
}
/* Cari barang: menu ini digunakan untuk mencari sebuah barang di dalam stok barang berdasarkan nama barang. */
/* Update stok barang: menu ini digunakan untuk mengupdate stok barang jika terjadi penjualan atau pembelian barang.*/


int main() {
    DoubleLinkedList linkedList = { NULL };
    int menu;
    char name[100];
    int qtt;

    while(1){
        printf("1. Tambah barang\n");
        printf("2. Hapus barang\n");
        printf("3. Tampilkan stok barang\n");
        printf("4. Cari barang\n");
        printf("5. Update stok barang\n");
        printf("6. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &menu);
        switch (menu) {
        case 1:
            printf("Masukkan nama barang: ");
            scanf("%s", name);
            printf("Masukkan jumlah barang: ");
            scanf("%d", &qtt);
            addNode(&linkedList, name, qtt);
            break;
        case 3:
            displayList(&linkedList);
            break;
        case 6:
            return 0;

        }

    }
}