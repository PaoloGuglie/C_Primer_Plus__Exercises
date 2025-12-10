#include <stdio.h>

#define LEN 20
#define CSIZE 4

typedef struct
{
    char first_name[LEN];
    char last_name[LEN];
} name;

typedef struct
{
    name name;
    float grades[3];
    float avg;
} student;

void get_grades(student *);
void calc_average(student *);
void show_grades(student *, int);

int main(void)
{
    student students[CSIZE] =
    {
        {
            .name.first_name = "Jack",
            .name.last_name = "Bell"
        },
        {
            .name.first_name = "Rebecca",
            .name.last_name = "Reed"
        },
        {
            .name.first_name = "Linda",
            .name.last_name = "Jacobs"
        },
        {
            .name.first_name = "Andrew",
            .name.last_name = "Braughmer"
        }
    };

    for (int i = 0; i < CSIZE; i++)
    {
        get_grades(&students[i]);

        calc_average(&students[i]);
    }

    show_grades(students, CSIZE);

    return 0;
}

void get_grades(student *pt)
{
    printf("Please, tell me the grades for %s %s: ", pt->name.first_name, pt->name.last_name);
    scanf("%f %f %f", &pt->grades[0], &pt->grades[1], &pt->grades[2]);
}

void calc_average(student *pt)
{
    pt->avg = (pt->grades[0] + pt->grades[1] + pt->grades[2]) / 3;
}

void show_grades(student *pt, int size)
{
    float class_avg = 0.0f;

    for (int i = 0; i < size; i++, pt++)
    {
        printf("\n%s %s's grades: %.1f - %.1f - %.1f . Average is %.1f.",
        pt->name.first_name, pt->name.last_name, pt->grades[0],
        pt->grades[1], pt->grades[2], pt->avg);

        class_avg += pt->avg;
    }

    class_avg /= size;

    printf("\nThe class average is %.1f.\n", class_avg);
}