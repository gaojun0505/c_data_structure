//
// Created by Administrator on 2020/1/23.
//

#ifndef UNTITLED_LIST_TEST_H
#define UNTITLED_LIST_TEST_H

#include "sqlist.h"

void sqlist_test() {
    Sqlist l;
    initList(l);
    insertElem(l, 0, 0);
    insertElem(l, 1, 1);
    insertElem(l, 2, 2);
    deleteElem(l, 1);
    insertElem(l, 0, 0);
    printList(l);
}


#endif //UNTITLED_LIST_TEST_H
