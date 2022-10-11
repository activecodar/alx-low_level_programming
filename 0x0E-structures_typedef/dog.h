#ifndef DOG_H
#define DOG_H
/**
 * struct dog - provides details about dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
