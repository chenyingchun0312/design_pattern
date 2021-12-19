#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "observer.h"

#define MAX_OBSERVER_NUMS (100)

struct subject
{
    struct observer *observer_list[MAX_OBSERVER_NUMS];              // ���observer����
    int num;                                                        // ��ǰ�Ѿ���ŵ�observer��������
    int data;                                                       // ���۲������

    void (*add)(struct subject *subject, struct observer *observer);// ���observer����
    void (*del)(struct subject *subject, struct observer *observer);// ɾ��observer����
    void (*notify)(struct subject *subject);                        // ֪ͨ���е�observer����
};
typedef struct subject subject_t;

subject_t *subject_create(void);
void subject_delete(subject_t *subject);
void subject_data_change(struct subject *subject, int data);

#endif
