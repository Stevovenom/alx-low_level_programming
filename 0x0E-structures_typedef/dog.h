#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
/**
 * struct dog - A structure that define a Dog with the given details
 * @name: the pointer to the name of the dog
 * @age: the pointer to the age of the dog
 * @owner: the details of the owner
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
