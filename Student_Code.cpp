#include "Student_Header.h"

void createList(studentList &L) {
    first(L) = NULL;
    last(L) = NULL;
}

addressStudent createElement(studentInfo data) {
    addressStudent P = new student;
    info(P).name = data.name;
    info(P).SID = data.SID;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

addressStudent findAddress(studentList L, studentInfo data) {
    addressStudent P = first(L);
    while (P != NULL) {
        if (info(P).SID == data.SID) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertFirst(studentList &L, addressStudent P) {
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void printList(studentList L) {
    addressStudent P = first(L);
    while (P != NULL) {
        cout << info(P).name << " " << info(P).SID << endl;
        P = next(P);
    }
    cout << endl;
}
