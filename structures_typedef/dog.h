#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - main struct
  * @name: parameter1
  * @age: parameter2
  * @owner: parameter3
  * Description: structure
  * return: nothing
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
