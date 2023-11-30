#include <stdio.h>
#include <stdlib.h>

struct student {
       int ID;
       char name[10];
       float score;
};

int main(int argc, char *argv[])
{
    struct student s1 = {123, "SUHYEON", 4.3};
    
    s1.ID = 123456;
    s1.name[0] = 'c';
    s1.score = 0.7;
    
    printf("ID : %d\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.score); 
    strcpy(s1.name, "SUHYEON");
    printf("name2: %s\n");
                 
    system("PAUSE");	
    return 0;
}
