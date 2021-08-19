#include "main.h"

int check_yun_year(int year){
  if ( ( (!(year % 4)) && (!(year % 100)) ) || (!(year%400)) ) return 1;
}
