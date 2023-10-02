/*
  @title: structure1-simple
  @author: JISHNU E

*/

#include <stdio.h>
#include <string.h>
// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type 'struct Person'
    struct Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "Jishnu");
    person1.age = 26;
    person1.height = 4.69;

    // Print the information stored in the structure
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f feet\n", person1.height);

    return 0;
}

