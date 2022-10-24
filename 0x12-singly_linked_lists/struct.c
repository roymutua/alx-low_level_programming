/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string) 
 * @b: value
 * @next: points to the next node 
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int b;
	struct list_s *next;
} list_t;
