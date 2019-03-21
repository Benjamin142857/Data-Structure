//
// Created by Benjamin142857 on 3/17/2019.
//

#ifndef L2_LINKSTACK_H
#define L2_LINKSTACK_H

#include "malloc.h"

/** Def ----------------------------------------------------   **/
// 类型定义 - 数据
typedef char DataType;
// 结构体定义 - 结点
struct  Node;
// 类型定义 - 结点指针
typedef  struct  Node  *PNode;
// 结构体内部定义 - 结点
struct  Node { 			/* 结点结构 */
    DataType      info;
    PNode         link;
};
// 结构体内部定义 - 栈
struct LinkStack {
    PNode  top; /* 指向栈顶结点 */
};
// 类型定义 - 栈指针
typedef  struct LinkStack  *PLinkStack;



/** Fun ----------------------------------------------------   **/
// 创建空Node
PNode create_node(PNode next_p, DataType x) {
    // 1.定义指针
    PNode p;
    // 2.分配内存
    p = (PNode)malloc(sizeof(struct Node));
    // 3.判断节点是否创建成功
    if(p != NULL) {
        p->info = x;
        p->link = next_p;
    }
    else {
        printf("结点创建失败\n");
    }

}

// 创建空LinkStack
PLinkStack LinkStack_create(void) {
    // 1.定义LinkStack指针, 分配内存
    PLinkStack pls = (PLinkStack)malloc(sizeof(struct LinkStack));
    // 2.判断是否分配成功, 成功：返回LinkStack指针，失败：返回NULL
    if(pls != NULL) {
        pls->top = NULL;
        return pls;
    }
    else {
        printf("LinkStack create fail !!!\n");
        return NULL;
    }
}

// LinkStack是否空栈
int LinkStack_IsEmpty(PLinkStack pls) {
    return (pls->top == NULL);
}

// LinkStack进栈
int LinkStack_push(PLinkStack pls, DataType x) {
    // 1.创建一个结点
    PNode p = create_node(pls->top, x);
    // 2.判断结点是否创建成功
    if(p != NULL) {
        pls->top = p;
    }
    else {
        printf("进栈失败");
    }
}

// LinkStack出栈
void LinkStack_pop(PLinkStack pls) {
    // 1.定义空结点指向栈顶元素作为临时容器，然后free
    PNode p = pls->top;
    // 2.判断是否空栈
    if (is_empty(pls)) {
        printf("该链表栈为空\n");
    }
    else {
        pls->top = pls->top->link;
        free(p);
    }
}

// LinkStack取栈顶
DataType LinkStack_GetTop(PLinkStack pls) {
    // 1.判断是否空栈
    if (is_empty(pls)) {
        printf("该链表栈为空\n");
    }
    else {
        return pls->top->info;
    }
}

#endif //L2_LINKSTACK_H
