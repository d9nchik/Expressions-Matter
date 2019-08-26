unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    unsigned int result=a*(b+c);    //For the stupid task - stupid solution!
    if(result<(a*b*c))
      result=a*b*c;
    if(result<(a+b*c))
      result=a+b*c;
    if(result<(a+b)*c)
      result=(a+b)*c;
    if(result<(a+b+c))
      result=a+b+c;
    if(result<a*b+c)
      result=a*b+c;
    return result ; 
}//P.S.:https://github.com/d9nchik
