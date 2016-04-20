union pointers {
       int *inp: 8;
       unsigned int *uinp: 8;        /* pointer to a integer */
       double *dp: 8;               /*pointer to a double   */
       unsigned double *udp: 8;    /* pointer to a double  */
       unsigned float *ufp: 8;    /* pointer to a float   */
       signed char *schp: 8;     /* pointer to a char    */ 
    }point;
struct data{
       union characters {
           char ch;
           signed char sch
       }: 8;
}


