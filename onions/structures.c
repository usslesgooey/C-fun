union pointers { /* can point to any adress, allocated to the program, in memory regardless of data type */
       int *inp;
       unsigned int *uinp;        /* pointer to a integer */
       double *dp;               /* pointer to a double  */
       unsigned double *udp;    /* pointer to a double  */
       unsigned float *ufp;    /* pointer to a float   */
       char *chp;             /* pointer to a char    */ 
       signed char *schp;    /* pointer to a char    */ 
    } point ;
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
       }character ;
};
int main() {
       data mychar;
       strcpy(mychar.characters.ch, "hero my gud frind");
       point.chp *msg = character.ch;
       printf(%s, msg);
}


