#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: Nom
 * @age: Age
 * @owner: Maitre
 *
 * Description: oui oui baguette
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
