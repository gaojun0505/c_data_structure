//
// Created by Administrator on 2020/1/23.
//

#ifndef UNTITLED_LNODE_H
#define UNTITLED_LNODE_H

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode;

typedef struct DLNode {
    int data;
    struct DLNode *prior;
    struct DLNode *next;
} DLNode;

#endif //UNTITLED_LNODE_H
