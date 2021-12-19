#include <stdio.h>
#include "subject.h"
#include "observer.h"
#include <rtthread.h>

void observer1_update(struct subject *subject, struct observer *observer)
{
    printf("observer1 received data has changee, data is: %d\r\n", subject->data);
}

void observer2_update(struct subject *subject, struct observer *observer)
{
    printf("observer2 received data has changee,, data is: %d\r\n", subject->data);
}

int observer_test(void)
{
    printf("create subject\r\n");
    subject_t *subject = subject_create();

    printf("create observer1\r\n");
    observer_t *observer1 = observer_create(observer1_update);
    printf("create observer2\r\n");
    observer_t *observer2 = observer_create(observer2_update);

    printf("add observer1 to subject\r\n");
    subject->add(subject, observer1);
    printf("add observer2 to subject\r\n");
    subject->add(subject, observer2);

    printf("subject data has changed, notify to observers\r\n");
    subject_data_change(subject, 10);
    printf("subject data has changed, notify to observers\r\n");
    subject_data_change(subject, 11);
    printf("subject data has changed, notify to observers\r\n");
    subject_data_change(subject, 12);
    printf("subject data has changed, notify to observers\r\n");
    subject_data_change(subject, 13);

    subject_delete(subject);
    observer_delete(observer1);
    observer_delete(observer2);
}

MSH_CMD_EXPORT(observer_test, a demo for observer design pattern)

