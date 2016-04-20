union pointers { /* can point to any adress, allocated to the program, in memory regardless of data type */
       int *inp: 8;
       unsigned int *uinp: 8;        /* pointer to a integer */
       double *dp: 8;               /* pointer to a double  */
       unsigned double *udp: 8;    /* pointer to a double  */
       unsigned float *ufp: 8;    /* pointer to a float   */
       char *chp: 8;             /* pointer to a char    */ 
       signed char *schp: 8;    /* pointer to a char    */ 
    }point;
struct data { 
       /* 
       not sure why ussfull yet 
       you have a structure of unions
       maby you could  have like 
       
       data mychar;
       strcpy(mychar.characters.ch, "hero my gud frind");
       point.chp *msg = character.ch;
       printf(%s, msg);
        
       
       */ 
       union characters {
           char ch[50];
           signed char sch[50]
       }character : 8;
}


