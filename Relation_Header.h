#ifndef RELATION_HEADER_H_INCLUDED
#define RELATION_HEADER_H_INCLUDED
#include "Course_Header.h"
#include "Student_Header.h"
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define course(P) P->course
#define student(P) P->student
using namespace std;

typedef struct relation *addressRelation;

struct relation {
    addressRelation next;
    addressRelation prev;
    addressRelation course;
    addressRelation student;
};

struct relationList {
    addressRelation first;
    addressRelation last;
};

void createList(relationList &L);
void insertFirst(relationList &L, addressRelation P);
void insertLast(relationList &L, addressRelation P);
void insertafter(addressRelation Prec, addressRelation P);

addressRelation findAddress(relationList L, addressRelation course, addressRelation student);
void createElement(addressRelation course, addressRelation student);
void printInfo(relationList L);

#endif // RELATION_HEADER_H_INCLUDED
