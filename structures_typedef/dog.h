#ifndef _dog
#define _dog

/**
  * struct dog - main struct
  * @name: parameter1
  * @age: parameter2
  * @owner: parameter3
  * return: nothing
  */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float *age, char *ownership);
void print _dog(struct dog d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
