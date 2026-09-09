#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

void frame1(){

    printf("--------\n");    
    printf("--------\n");
    printf("--------\n");
    printf("--------\n");
    printf("---O----\n");

}

void frame2(){

    printf("--------\n");    
    printf("--------\n");
    printf("--------\n");
    printf("---O----\n");
    printf("--------\n");

}

void frame3(){

    printf("--------\n");    
    printf("--------\n");
    printf("---O----\n");
    printf("--------\n");
    printf("--------\n");

}

void frame4(){

    printf("--------\n");    
    printf("---O----\n");
    printf("--------\n");
    printf("--------\n");
    printf("--------\n");

}

void frame5(){

    printf("---O----\n");    
    printf("--------\n");
    printf("--------\n");
    printf("--------\n");
    printf("--------\n");

}

int main(){

    system("clear");

    while (true){
        
        //a bolinha sobe
        frame1();
        usleep(150000);
        system("clear");

        frame2();
        usleep(150000);
        system("clear");

        frame3();
        usleep(150000);
        system("clear");

        frame4();
        usleep(150000);
        system("clear");

        frame5();
        usleep(150000);
        system("clear");

        //a bolinha desce
        frame4();
        usleep(150000);
        system("clear");

        frame3();
        usleep(150000);
        system("clear");

        frame2();
        usleep(150000);
        system("clear");
    }

    return 0;
}
