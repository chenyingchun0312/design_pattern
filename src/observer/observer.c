#include <stddef.h>
#include <stdlib.h>
#include "observer.h"

observer_t *observer_create(update_t update)
{
    observer_t *observer = (observer_t *)malloc(sizeof(observer_t));
    if (observer != NULL)
    {
        observer->update = update;
    }
    return observer;
}

void observer_delete(observer_t *observer)
{
    if (observer != NULL)
    {
        free(observer);
    }
}
