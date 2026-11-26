
#ifndef TUBES_H
#define TUBES_H

#include <iostream>
#include <string>
using namespace std;

// STRUCT SINGLY LINKED LIST (EVIDENCE)
struct Evidence {
    int idEvidence;
    string namaEvidence;
    int idLocation;
    string namaLocation;
    Evidence *next;
};

typedef Evidence* addressEvidence;

struct ListEvidence {
    addressEvidence first;
    addressEvidence last;
};


// STRUCT GRAPH (INVESTIGATION BOARD)
// KOSONG DULU JANGAN LUPA ISI NANTI ABIS BELAJAR


// PRIMITIVE SLL
void createList(ListEvidence &L);
addressEvidence allocateEvidence(int id, string nama, int idLocation, string namaLocation);
void insertLast(ListEvidence &L, addressEvidence P);
void deleteEvidence(ListEvidence &L, int id);
addressEvidence searchEvidence(ListEvidence L, int id);
void updateEvidence(addressEvidence P, string namaBaru);
void printEvidence(ListEvidence L);


// PRIMITIVE GRAPH
// KOSONG DULU JANGAN LUPA ISI NANTI ABIS BELAJAR


// SUBPROGRAM EVIDENCE
bool isEvidenceCollected(ListEvidence L, int id);
void collectEvidence(ListEvidence &L, int id, string nama, int idLocation, string namaLocation);
void displayEvidence(ListEvidence L);
void searchEvidenceByName(ListEvidence L, string nama);


// SUBPROGRAM CRIME SCENE
void displayLocations();
void displayAvailableEvidence(int idLocation);
void visitLocation(ListEvidence &L);


// SUBPROGRAM INVESTIGATION BOARD
// KOSONG DULU


// SUBPROGRAM CASE PROGRESS
void displayCaseProgress(ListEvidence L, int totalEvidence);


// SUBPROGRAM CASE CONCLUSION
// KOSONG DULU BOS

#endif