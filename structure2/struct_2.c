/*
  @title: structure2- typedef
  @author: JISHNU E

*/

#include <stdio.h>
#include <string.h>
// Define a structure named 'Person'
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

int main() {
    // Declare a variable of type 'Person'
    Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "Victor");
    person1.age = 10;
    person1.height = 4.2;

    // Print the information stored in the structure
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f feet\n", person1.height);

    return 0;
}
