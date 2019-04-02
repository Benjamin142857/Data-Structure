//
// Created by Benjamin142857 on 4/2/2019.
//

#ifndef GRAPE_GRAPEMARTIX_H
#define GRAPE_GRAPEMARTIX_H

#include "malloc.h"

/** Def ----------------------------------------------------**/
// ��
#define MAXNUM 20				/*** ͼ����󶥵���  ***/
#define MAXVALUE 65535		/*** ���ֵ  ***/

// �ṹ�嶨��
struct GraphMartix{
    char data[MAXNUM];                             // ���涥����Ϣ����Ż���ĸ��
    int graph_type;		                           // ͼ�����ͣ�0������ͼ��1������ͼ��
    int node_num;		                           // ���������
    int edge_num;		                           // �ߵ�����
    int edge_value[MAXNUM][MAXNUM];                // �ö�ά���鱣��㵽��ıߵ�Ȩֵ
    int flag_traverse[MAXNUM];                     // �������

};
// ���Ͷ��� - GraphMartixָ��
typedef struct GraphMartix *PGraphMartix;

/** Fun ----------------------------------------------------**/

// ����ͼ(�ڽӾ����ʾ)
PGraphMartix GraphMartix_create(int graph_type, int node_num) {
    // 1. ����ָ�룬�����ڴ�
    PGraphMartix gp = (PGraphMartix)malloc(sizeof(struct GraphMartix));

    // 2.�ж��Ƿ����ɹ�
    if(gp != NULL) {
        gp->graph_type = graph_type;
        gp->node_num = node_num;
        gp->edge_num = 0;
        int weight;     //��ʱȨ-��ת

        // 2.1 ���붨����Ϣ�����浽ͼdata
        printf("[1] ����ͼ�и�������Ϣ��\n");
        for(int i=0; i<gp->node_num; i++ ) {
            printf("��%d�����㣺", i+1);
            printf("\n");
            getchar();
            scanf("%c", &(gp->data[i]));
        }

        // 2.2 �����Ȩ��Ϣ�����浽ͼedge_value
        printf("[2] ���빹�ɸ��ߵĶ��㼰Ȩֵ��\n");
        for(int i=0 ; i < gp->node_num; i++) {
            for(int j=0; j < gp->node_num; j++) {
                printf("(%d, %d): ", i, j);
                printf("\n");
                scanf("%d", &weight);
                if(weight == -1) {
                    gp->edge_value[i][j] = MAXVALUE;
                }
                else if(weight == 0) {
                    gp->edge_value[i][j] = weight;
                }
                else {
                    gp->edge_value[i][j] = weight;
                    gp->edge_num += 1;
                }
            }
        }

        // 2.3 �������
        gp->edge_num = gp->edge_num / 2;

        return gp;
    }
    else {
        free(gp);
        printf("GrapeMartix create fail !!!\n");
        return NULL;
    }
}

// ��վ���
void GraphMartix_clear(PGraphMartix gp) {
    for(int i=0 ; i<gp->node_num ; i++) {
        for(int j=0 ; j<gp->node_num ; j++) {
            gp->edge_value[i][j] = MAXVALUE; 	/*** ���þ����и�Ԫ�ص�ֵΪMAXVALUE  ***/
        }
    }
}


//  �Զ�ά�������ʽ��ӡ����
void GrapeMartix_print(PGraphMartix gp) {
    for(int j=0 ; j<gp->node_num ; j++) {
        printf("%c",gp->data[j]); 	/*** �ڵ�һ�����������Ϣ  ***/
    }

    printf("\n");

    for(int i=0 ; i<gp->node_num ; i++) {
        printf("%c",gp->data[i]);

        for(int j=0 ; j<gp->node_num ;j++) {
            if(gp->edge_value[i][j] == MAXVALUE) {
                printf("Z ");
            }
            else {
                printf("%d ",gp->edge_value[i][j]);
            }
        }
        printf("\n");
    }
}


#endif //GRAPE_GRAPEMARTIX_H
