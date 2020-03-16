#include "Course_Header.h"

void createList(courseList &L) {
    first(L) = NULL;
    last(L) = NULL;
}

addressCourse createElement(courseInfo newData) {
    addressCourse P = new course;
    info(P).courseName = newData.courseName;
    info(P).courseCode = newData.courseCode;
    info(P).SKS = newData.SKS;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

addressCourse findAddress(courseList L, courseInfo data) {
    addressCourse P = first(L);
    addressCourse addressX;
    while (P != NULL) {
        if (info(P).courseName == data.courseName) {
            addressX = P;
        }
        P = next(P);
    }
    return addressX;
}

void insertFirst(courseList &L, addressCourse P) {
    if (first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void printList(courseList L) {
    addressCourse P = first(L);
    while (P != NULL) {
        cout << info(P).courseName << ", " << info(P).SKS << ", " << info(P).courseCode << endl;
        P = next(P);
    }
    cout << endl;
}
