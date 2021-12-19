#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include "observer.h"

#define MAX_OBSERVER_NUMS (100)

struct subject
{
    struct observer *observer_list[MAX_OBSERVER_NUMS];              // 存放observer对象
    int num;                                                        // 当前已经存放的observer对象数量
    int data;                                                       // 被观察的数据

    void (*add)(struct subject *subject, struct observer *observer);// 添加observer对象
    void (*del)(struct subject *subject, struct observer *observer);// 删除observer对象
    void (*notify)(struct subject *subject);                        // 通知所有的observer对象
};
typedef struct subject subject_t;

subject_t *subject_create(void);
void subject_delete(subject_t *subject);
void subject_data_change(struct subject *subject, int data);

#endif
