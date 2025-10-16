#include<stdio.h>
int main()
    {
        float R1, R2, R3, Ra, Rb, Rc, Ry, Rd;
        char sel;
        puts("Select option:\n'd' for wye to delta. 'y' for delta to wye.");
        sel=getchar();
        if(sel=='y'){
                puts("Input R1, R2 and R3");
            scanf("%f %f %f",&R1, &R2, &R3);
        Ry = R1*R2 + R2*R3 + R3*R1;
        Ra = Ry/R1;
        Rb =Ry/R2;
        Rc =Ry/R3;
        printf("Wye's resistor value: %f ohms, %f ohms, %f ohms.",Ra, Rb, Rc);
        }
        else if(sel=='d'){
          scanf("%f %f %f",&Ra, &Rb, &Rc);
          Rd = Ra + Rb +Rc;
          R1 = Rb*Rc/Rd;
          R2 = Ra*Rc/Rd;
          R3 = Ra*Rb/Rd;
          printf("Delta's Resistors value: %f ohms, %f ohms, %f ohms.",R1, R2, R3);
        }
        else
        {
            printf("Selection error!");
        }
        return 0;
    }
