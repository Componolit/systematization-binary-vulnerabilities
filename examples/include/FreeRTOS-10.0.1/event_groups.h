#ifndef EVENT_GROUPS_H
#define EVENT_GROUPS_H

typedef void * EventGroupHandle_t;
typedef TickType_t EventBits_t;

#define xEventGroupSetBits(g, b) (0)
#define xEventGroupCreate() (NULL)
#define xEventGroupWaitBits(g, b, c, a, t) (0)
#define vEventGroupDelete(g) 

#endif // EVENT_GROUPS_H
