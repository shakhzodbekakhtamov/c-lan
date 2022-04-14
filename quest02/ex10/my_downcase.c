char  convertCase(char a)
   {
       if(a>='A' && a<='Z')
       {
           a ='a'+(a-'A');
       }
       return a;
   }
   char* my_downcase(char* param_1)
   {
       int qiymat = 0;
       for(int i=0; param_1[i] != '\0'; i++){
           char chr = param_1[i];
           param_1[i]= convertCase(chr);
       }
       return param_1;
   }