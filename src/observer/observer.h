#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include "subject.h"

struct observer;
typedef void (*update_t)(struct subject * subject, struct observer *observer);
struct observer
{
    update_t update;    // 当observer对象接收到数据变化的通知时的回调函数
};
typedef struct observer observer_t;

observer_t *observer_create(update_t update);
void observer_delete(observer_t *observer);

#endif