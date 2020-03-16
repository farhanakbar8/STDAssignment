#ifndef STUDENT_HEADER_H_INCLUDED
#define STUDENT_HEADER_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
using namespace std;
typedef struct student *addressStudent;

struct studentInfo {
    string name;
    int SID;
};

struct student {
    studentInfo info;
    addressStudent next;
    addressStudent prev;
};

struct studentList {
    addressStudent first;
    addressStudent last;
};

void createList(studentList &L);
addressStudent createElement(studentInfo newData);
void insertFirst(studentList &L, addressStudent P);
void printList(studentList L);

addressStudent findAddress(studentList L, studentInfo data);

#endif // STUDENT_HEADER_H_INCLUDED
