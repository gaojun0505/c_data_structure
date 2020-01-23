//
// Created by Administrator on 2020/1/23.
//

#ifndef UNTITLED_SQLIST_H
#define UNTITLED_SQLIST_H

#include "../pubilc/public.h"

#define MaxSize 100
typedef struct Sqlist {
    int data[MaxSize];
    int length;
} Sqlist;

//初始化
void initList(Sqlist &l) {
    l.length = 0;
}

//打印
void printList(Sqlist l) {
    cout << "[ ";
    for (int i = 0; i < l.length; i++) {
        cout << l.data[i] << " ";
    }
    cout << "]" << endl;
}

//查找
int getElem(Sqlist l, int index) {
    assert(index >= 0 && index <= l.length - 1);
    return l.data[index];
}

int findElem(Sqlist l, int elem) {
    for (int i = 0; i < l.length; i++) {
        if (elem == l.data[i]) {
            return i;
        }
    }
    return -1;
}

//添加
void insertElem(Sqlist &l, int index, int elem) {
    assert(index >= 0 && index <= l.length && l.length < MaxSize);
    for (int i = l.length - 1; i >= index; i--) {
        l.data[i + 1] = l.data[i];
    }
    l.data[index] = elem;
    l.length++;
}

//删除
int deleteElem(Sqlist &l, int index) {
    assert(index >= 0 && index <= l.length - 1);
    int ret = l.data[index];
    for (int i = index; i < l.length - 1; i++) {
        l.data[i] = l.data[i + 1];
    }
    l.length--;
    return ret;
}


#endif //UNTITLED_SQLIST_H
