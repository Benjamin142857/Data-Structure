#include <stdio.h>
#include "SeqQueue.h"

// test
int main() {
    PSeqQueue psq = SeqQueue_create(10);

    for(int i=5; i<12; i++) {
        SeqQueue_enq(psq, i);
    }

    printf("%d\n%d\n%d\n%d\n", SeqQueue_MemberNum(psq), SeqQueue_GetFirst(psq), SeqQueue_IsFull(psq), SeqQueue_IsEmpty(psq));

    SeqQueue_deq(psq);
    printf("%d\n", SeqQueue_GetFirst(psq));

    for(int i=5; i<13; i++) {
        SeqQueue_deq(psq);
    }
    printf("%d\n%d\n%d\n%d\n", SeqQueue_MemberNum(psq), SeqQueue_IsFull(psq), SeqQueue_IsEmpty(psq));

    return 0;
}