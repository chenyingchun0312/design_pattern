#include <stddef.h>
#include <stdlib.h>
#include "subject.h"

void subject_add(struct subject *subject, struct observer *observer)
{
    if (subject->num < MAX_OBSERVER_NUMS)
    {
        subject->observer_list[subject->num] = observer;
        subject->num++;
    }
}

void subject_del(struct subject *subject, struct observer *observer)
{
    if (subject->num > 0)
    {
        subject->num--;
    }
}

void subject_notify(struct subject *subject)
{
    observer_t *p_observer;
    for (int i = 0; i < subject->num; i++)
    {
        p_observer = subject->observer_list[i];
        p_observer->update(subject, p_observer);
    }
}

subject_t *subject_create(void)
{
    subject_t *subject = (subject_t *)malloc(sizeof(subject_t));
    if (subject != NULL)
    {
        subject->add = subject_add;
        subject->del = subject_del;
        subject->notify = subject_notify;
        subject->num = 0;
        subject->data = 0;
    }

    return subject;
}

void subject_delete(subject_t *subject)
{
    if (subject != NULL)
    {
        free(subject);
        subject = NULL;
    }
}

void subject_data_change(struct subject *subject, int data)
{
    subject->data = data;
    subject->notify(subject);
}
