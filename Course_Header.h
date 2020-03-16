#ifndef COURSE_HEADER_H_INCLUDED
#define COURSE_HEADER_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
using namespace std;
typedef struct course *addressCourse;

struct courseInfo {
    string courseName;
    int SKS;
    string courseCode;
};

struct course {
    courseInfo info;
    addressCourse next;
    addressCourse prev;
};

struct courseList {
    addressCourse first;
    addressCourse last;
};

void createList(courseList &L);
addressCourse createElement(courseInfo newData);
void insertFirst(courseList &L, addressCourse P);

addressCourse findAddress(courseList L, courseInfo data);
void printList(courseList L);

#endif // COURSE_HEADER_H_INCLUDED
