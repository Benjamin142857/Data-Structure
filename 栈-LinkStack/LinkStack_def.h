//
// Created by Benjamin142857 on 3/17/2019.
//

#ifndef L2_LINKSTACK_DEF_H
#define L2_LINKSTACK_DEF_H


// 数据类型-名定义
typedef char DataType;


// 节点结构-定义
struct  Node;
// 节点结构-名定义
typedef  struct  Node  *PNode;
// 节点结构-内部定义
struct  Node { 			/* 结点结构 */
    DataType      info;
    PNode         link;
};


// 链表栈-定义
struct LinkStack
{
    PNode  top; /* 指向栈顶结点 */
};
// 链表栈-名定义
typedef  struct LinkStack  *PLinkStack;





#endif //L2_LINKSTACK_DEF_H
