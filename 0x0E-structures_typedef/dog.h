#ifndef DOG
#define DOG
/**
 * struct dog - struct of a dog datatype
 * @name: dog's name
 * @age: age of the dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
