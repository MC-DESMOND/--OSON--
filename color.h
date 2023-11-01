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

// EXAMPLE
void Example(){
    printf("\n\tCOLORED TEXT  %s\n\n",RESET);
    printf("\t%sRED       %s\n"    ,RED,RESET);
    printf("\t%sGREEN     %s\n"  ,GREEN,RESET);
    printf("\t%sYELLOW    %s\n" ,YELLOW,RESET);
    printf("\t%sMAGENTA   %s\n",MAGENTA,RESET);
    printf("\t%sCYAN      %s\n\n"   ,CYAN,RESET);

    printf("\tHIGHLIGHTED TEXT  %s\n\n",RESET);
    printf("\t%sHIGHLIGHT RED       %s\n",HIGHLIGHT_RED,RESET);
    printf("\t%sHIGHLIGHT GREEN     %s\n",HIGHLIGHT_GREEN,RESET);
    printf("\t%sHIGHLIGHT YELLOW    %s\n",HIGHLIGHT_YELLOW,RESET);
    printf("\t%sHIGHLIGHT MAGENTA   %s\n",HIGHLIGHT_MAGENTA,RESET);
    printf("\t%sHIGHLIGHT CYAN      %s\n\n",HIGHLIGHT_CYAN,RESET);

    printf("\tDARK COLORED TEXT  %s\n\n",RESET);
    printf("\t%sDARK RED       %s\n",DARK_RED,RESET);
    printf("\t%sDARK GREEN     %s\n",DARK_GREEN,RESET);
    printf("\t%sDARK YELLOW    %s\n",DARK_YELLOW,RESET);
    printf("\t%sDARK MAGENTA   %s\n",DARK_MAGENTA,RESET);
    printf("\t%sDARK CYAN      %s\n\n",DARK_CYAN,RESET);

    printf("\tFONTS         %s\n\n",RESET);
    printf("\t%sBOLD        %s\n",BOLD,RESET);
    printf("\t%sCOURIER     %s\n",COURIER,RESET);
    printf("\t%sUNDERLINED  %s\n",UNDERLINE,RESET);
    printf("\t%sINVISIBLE   %s<-INVISBLE\n",INVISIBLE,RESET);
    printf("\t%sDELETED     %s\n",DELETE,RESET);
}

// HOW I FOUND IT
void HOW_I_FOUND_IT(){
    for (int i=0;i<100;i++){
            char a[50];
            sprintf(a,"%d",i);
            printf("\x1b[%sm colored text\n",a); // <- MAIN WAY
}}

#endif
/* *! __call__ the Example or HOW_I_FOUND_IT function in your main file.
this is a header file*/
//! NOTE: ONLY WORKS ON EDITORS
