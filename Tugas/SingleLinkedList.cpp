#include <iostream>
using namespace std;

struct Lagu{

    string judul, penyanyi, pencipta;

    Lagu *next;

};

Lagu *head, *tail, *cur;

void createSingleLinkedList(string judul, string penyanyi, string pencipta){
    head = new Lagu();
    head->judul = judul;
    head->penyanyi = penyanyi;
    head->pencipta = pencipta;
    head->next = NULL;
    tail = head;
}

void printSingleLinkedList(){
    cur = head;
    while( cur != NULL ){
        cout << "Judul Lagu : " << cur->judul << endl;
        cout << "Penyanyi : " << cur->penyanyi << endl;
        cout << "Pencipta :" << cur->pencipta << endl;

        cur = cur->next;
    }
}

int main(){

    createSingleLinkedList("Halo", "Beyonce", "Ryan dan Evan");

    printSingleLinkedList();

}
