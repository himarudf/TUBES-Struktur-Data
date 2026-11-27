
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
enum JenisObjek {
    EVIDENCE,
    SUSPECT,
    LOCATION
};

struct Edge {
    int idTujuan;
    Edge *next;
};

typedef Edge* addressEdge;

struct Vertex {
    int idVertex;
    JenisObjek jenis;
    string namaObjek;
    bool visited;
    addressEdge firstEdge;
    Vertex *next;
};

typedef Vertex* addressVertex;

struct Graph {
    addressVertex firstVertex;
};


// PRIMITIVE SLL
void createList(ListEvidence &L);
addressEvidence allocateEvidence(int id, string nama, int idLocation, string namaLocation);
void insertLast(ListEvidence &L, addressEvidence P);
void deleteEvidence(ListEvidence &L, int id);
addressEvidence searchEvidence(ListEvidence L, int id);
void updateEvidence(addressEvidence P, string namaBaru);
void printEvidence(ListEvidence L);


// PRIMITIVE GRAPH
void createGraph(Graph &G);
addressVertex allocateVertex(int id, JenisObjek jenis, string nama);
addressEdge allocateEdge(int idTujuan);
void insertVertex(Graph &G, addressVertex V);
addressVertex searchVertex(Graph G, int id);
void insertEdge(addressVertex V, int idTujuan);
void deleteEdge(addressVertex V, int idTujuan);
void printGraph(Graph G);
void printConnections(Graph G, int idVertex);
void resetVisited(Graph &G);
void DFS(Graph &G, addressVertex V);


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
void addConnection(Graph &G, int idObjek1, int idObjek2);
void removeConnection(Graph &G, int idObjek1, int idObjek2);
void displayInvestigationBoard(Graph G);
void traceConnection(Graph &G, int idVertex);


// SUBPROGRAM CASE PROGRESS
void displayCaseProgress(ListEvidence L, int totalEvidence);


// SUBPROGRAM CASE CONCLUSION
void displaySuspects(Graph G);
void caseConclusion(int idPilihan, int idPelakuBenar);

#endif