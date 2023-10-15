#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Person
{
  char first_initial;
  int age;
  float gpa;
};

void bubble_sort(struct Person *arr, int size)
{
  int swapped = 0;

  for (int i = 0; i < size - 1; i++)
  {
    swapped = 0;

    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j].age > arr[j + 1].age)
      {
        struct Person temp;
        temp.age = arr[j].age;
        temp.gpa = arr[j].gpa;
        temp.first_initial = arr[j].first_initial;

        arr[j].age = arr[j + 1].age;
        arr[j].gpa = arr[j + 1].gpa;
        arr[j].first_initial = arr[i + 1].first_initial;

        arr[j + 1].age = temp.age;
        arr[j + 1].gpa = temp.gpa;
        arr[j + 1].first_initial = temp.first_initial;

        swapped = 1;
      }
    }

    if (swapped == 0)
    {
      break;
    }
  }
}

int main()
{
  srand(time(NULL));

  struct Person *person_array;

  person_array = malloc(10 * sizeof(struct Person));

  for (int i = 0; i < 10; i++)
  {
    person_array[i].age = rand() % 40 + 10;
    person_array[i].gpa = rand() % 4 + rand() % 10 / 10.0;
    person_array[i].first_initial = rand() % 26 + 65;
  }

  struct Person **person_arr

  for (int i = 0; i < 10; i++)
  {
    printf("%c, %d, %.2f\n", person_array[i].first_initial, person_array[i].age, person_array[i].gpa);
  }

  bubble_sort(person_array, 10);
  printf("\n\n\n");

  for (int i = 0; i < 10; i++)
  {
    printf("%c, %d, %.2f\n", person_array[i].first_initial, person_array[i].age, person_array[i].gpa);
  }
}
