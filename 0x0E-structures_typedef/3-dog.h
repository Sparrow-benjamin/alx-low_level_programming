#ifndef DOG_H
#define DOG_H

/**
 *dog - structure for dog variables
 *@name:name
 *@age:age of dog
 *@owner:name of owner
 */
typedef struct dog
{
  char * name;
  float age;
  char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
