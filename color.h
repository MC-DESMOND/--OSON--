// ! OSONIC DESDROID.INC
//* COLOR MODULE FOR C/C++

#include <stdio.h>

#ifndef COLOR_H_
#define COLOR_H_

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//FONTS AVALIABLE
#define BOLD        "\x1b[1m"
#define COURIER     "\x1b[2m"
#define ITALIC      "\x1b[3m"
#define UNDERLINE   "\x1b[4m"
#define INVISIBLE   "\x1b[8m"
#define DELETE      "\x1b[9m"

// HIGHLIGHT_COLOR
#define HIGHLIGHT_RED        "\x1b[41m"
#define HIGHLIGHT_GREEN      "\x1b[42m"
#define HIGHLIGHT_YELLOW     "\x1b[43m"
#define HIGHLIGHT_BLUE       "\x1b[44m"
#define HIGHLIGHT_MAGENTA    "\x1b[45m"
#define HIGHLIGHT_CYAN       "\x1b[46m"
#define HIGHLIGHT_WHITE      "\x1b[47m"

//DARK_COLOR
#define DARK_GREY    "\x1b[90m"
#define DARK_RED     "\x1b[91m"
#define DARK_GREEN   "\x1b[92m"
#define DARK_YELLOW  "\x1b[93m"
#define DARK_BLUE    "\x1b[94m"
#define DARK_MAGENTA "\x1b[95m"
#define DARK_CYAN    "\x1b[96m"

// use this :
#define GREY    "\x1b[30m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

//PRINTING

void p(const char *text){
    printf("%s",text);}

//PRETTY PRINT

void pprint(const char *format
            ,const char *MODE){
    printf("%s%s%s",MODE,format,RESET);
}

// FUSING FONT AND COLOR

void cprint(const char *format,
            const char*color,
            const char *font)
 {
    p(color);
    printf("%s%s%s",font,format,RESET);
 }

// EXAMPLE
void Example(){
    pprint("\n\tCOLORED TEXT  \n\n",RESET);
    pprint("\tRED       \n"    ,RED);
    pprint("\tGREEN     \n"  ,GREEN);
    pprint("\tYELLOW    \n" ,YELLOW);
    pprint("\tMAGENTA   \n",MAGENTA);
    pprint("\tCYAN      \n\n"   ,CYAN);

    pprint("\tHIGHLIGHTED TEXT  \n\n",RESET);
    pprint("\tHIGHLIGHT RED       \n",HIGHLIGHT_RED);
    pprint("\tHIGHLIGHT GREEN     \n",HIGHLIGHT_GREEN);
    pprint("\tHIGHLIGHT YELLOW    \n",HIGHLIGHT_YELLOW);
    pprint("\tHIGHLIGHT MAGENTA   \n",HIGHLIGHT_MAGENTA);
    pprint("\tHIGHLIGHT CYAN      \n\n",HIGHLIGHT_CYAN);

    pprint("\tDARK COLORED TEXT  \n\n",RESET);
    pprint("\tDARK RED       \n",DARK_RED);
    pprint("\tDARK GREEN     \n",DARK_GREEN);
    pprint("\tDARK YELLOW    \n",DARK_YELLOW);
    pprint("\tDARK MAGENTA   \n",DARK_MAGENTA);
    pprint("\tDARK CYAN      \n\n",DARK_CYAN);

    pprint("\tFONTS         \n\n",RESET);
    pprint("\tBOLD        \n",BOLD);
    pprint("\tCOURIER     \n",COURIER);
    pprint("\tUNDERLINED  \n",UNDERLINE);
    pprint("\tINVISIBLE   <-INVISBLE\n",INVISIBLE);
    pprint("\tDELETED     \n",DELETE);
}

// HOW I FOUND IT
void HOW_I_FOUND_IT(){
    for (int i=0;i<100;i++){
            char a[50];
            sprintf(a,"%d",i);
            printf("\x1b[%sm colored text\n",a); // <- MAIN WAY
}}

#endif
//! NOTE: ONLY WORKS ON EDITORS
