char    *my_strstr(char * str, char * sstring)
{
char * a = str, *b = sstring;
    for(;;){
        if ( !*b ) return (char *) str;
        if ( !*a )return 0;
        if( *a++ != *b++) {a = ++str ; b = sstring;} 
    }
}