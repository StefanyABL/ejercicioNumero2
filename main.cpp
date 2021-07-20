/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Stefany
 *
 * Created on 9 de septiembre de 2019, 04:25 PM
 */


#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

using namespace std;

/*
 * 
 */
int main(void) {
    system("clear");
    printf ("[%.2f]\n",PI);
    printf ("[%10f]\n",PI);
    printf ("[%10.2f]\n",PI);
    printf ("[%10d]\n",623276723);
    printf ("[%-10d]\n",623276723);
    printf ("[%010d]\n",623276723);
    printf ( " %d en Octal=%o Hexadecimal=%x\n" ,255 ,255 ,255);
    

    return 0;
}

