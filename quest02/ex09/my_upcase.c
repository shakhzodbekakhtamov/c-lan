char  convertCase(char a){
       if(a>='a' && a<='x')
       {
           a='A'+(a-'a');
       }
       return a;
   }
   char* my_upcase(char* param_1){
       int something = 0;
       for(int i=0; param_1[i] != '\0'; i++){
           char chr = param_1[i];
           param_1[i]= convertCase(chr);
       }
       return param_1;
   }