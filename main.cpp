#include "Course_Header.h"
#include "Student_Header.h"
#include "Relation_Header.h"

int main() {
    courseList C;
    studentList S;
    relationList R;
    courseInfo courseData;
    studentInfo studentData;
    relation relationData;
    addressCourse AC;
    addressStudent AS;
//    addressRelation AR;

    createList(C);
    createList(S);
//    createList(R);

    courseData.courseName = "BASIC ALGORITHM";
    courseData.SKS = 4;
    courseData.courseCode = "CCHIA4";
    AC = createElement(courseData);
    insertFirst(C, AC);

    courseData.courseName = "CALCULUS IB";
    courseData.SKS = 4;
    courseData.courseCode = "MUH1G3";
    AC = createElement(courseData);
    insertFirst(C, AC);

    courseData.courseName = "MATH LOGIC";
    courseData.SKS = 4;
    courseData.courseCode = "MSH1A3";
    AC = createElement(courseData);
    insertFirst(C, AC);

    printList(C);

    studentData.name = "FARHAN";
    studentData.SID = 1301192246;
    AS = createElement(studentData);
    insertFirst(S, AS);

    studentData.name = "RIZQI";
    studentData.SID = 1301194432;
    AS = createElement(studentData);
    insertFirst(S, AS);

    printList(S);


}
